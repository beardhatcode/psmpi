/*
 * ParaStation
 *
 * Copyright (C) 2006-2019 ParTec Cluster Competence Center GmbH, Munich
 *
 * This file may be distributed under the terms of the Q Public License
 * as defined in the file LICENSE.QPL included in the packaging of this
 * file.
 *
 * Author:	Jens Hauke <hauke@par-tec.com>
 */

#include <sched.h>
#include "mpidimpl.h"
#include "mpid_psp_request.h"

// This must be the last include before sysmbols are defined:
#include "mpid_visibility.h"


#define PSP_NBC_PROGRESS_DELAY 100


static inline
void MPID_DEV_Request_common_wait(MPIR_Request *req)
{
	static unsigned int counter_to_nbc_progress = 0;
	int made_progress;
	pscom_request_t *preq = req->dev.kind.common.pscom_req;

	MPID_PSP_LOCKFREE_CALL(pscom_wait(preq));

	/* The progress counting here is just for reducing the scheduling impact onto pt2pt
	    latencies if a lot of non-blocking collectives are pending without progress: */
	counter_to_nbc_progress++;
	if(counter_to_nbc_progress == PSP_NBC_PROGRESS_DELAY) {
		MPIDU_Sched_progress(&made_progress);
		if(made_progress) counter_to_nbc_progress--;
		else counter_to_nbc_progress = 0;
	}
}


static inline
void MPID_DEV_Request_send_wait(MPIR_Request *req)
{
	MPID_DEV_Request_common_wait(req);
}


static inline
void MPID_DEV_Request_recv_wait(MPIR_Request *req)
{
	MPID_DEV_Request_common_wait(req);
}


static inline
void MPID_DEV_Request_psend_wait(MPIR_Request *req)
{
	MPID_DEV_Request_send_wait(req);
}


static inline
void MPID_DEV_Request_precv_wait(MPIR_Request *req)
{
	MPID_DEV_Request_recv_wait(req);
}


/* Dont use request after MPID_DEV_Request_wait(), until you hold one additional ref! */
static inline
void MPID_DEV_Request_wait(MPIR_Request *req)
{
	switch (req->kind) {
	case MPIR_REQUEST_KIND__RECV:
		MPID_DEV_Request_recv_wait(req);
		break;
	case MPIR_REQUEST_KIND__SEND:
		MPID_DEV_Request_send_wait(req);
		break;
	case MPIR_REQUEST_KIND__PREQUEST_RECV:
		MPID_DEV_Request_precv_wait(req);
		break;
	case MPIR_REQUEST_KIND__PREQUEST_SEND:
		MPID_DEV_Request_psend_wait(req);
		break;
/*
	case MPIR_REQUEST_KIND__MULTI:
			MPID_DEV_Request_multi_wait(req);
			break;
*/
	case MPIR_REQUEST_KIND__COLL:
		/* ToDo: Unhandled request type!!! */
#		define MPID_COLL_REQUEST_NOT_IMPLEMENTED 0
		assert(MPID_COLL_REQUEST_NOT_IMPLEMENTED);
		break;
	case MPIR_REQUEST_KIND__MPROBE:
		/* ToDo: Unhandled request type!!! */
#		define MPIR_REQUEST_KIND__MPROBE_NOT_IMPLEMENTED 0
		assert(MPIR_REQUEST_KIND__MPROBE_NOT_IMPLEMENTED);
		break;
	case MPIR_REQUEST_KIND__RMA:
		/* ToDo: Unhandled request type!!! */
#		define MPIR_REQUEST_KIND__RMA_NOT_IMPLEMENTED 0
		assert(MPIR_REQUEST_KIND__RMA_NOT_IMPLEMENTED);
		break;
	case MPIR_REQUEST_KIND__GREQUEST:
	case MPIR_REQUEST_KIND__UNDEFINED:
	case MPIR_REQUEST_KIND__LAST:
		assert(0);
		break;
	}
}


void MPIDI_PSP_Progress_start(MPID_Progress_state * state)
{
}


#define WAIT_DEBUG(str)

#if !defined(WAIT_DEBUG)
#include <unistd.h>

#define WAIT_DEBUG(str) do {									\
	printf("#%d %s() line %d." str "\n", MPIDI_Process.my_pg_rank, __func__, __LINE__);	\
	sleep(2);										\
} while (0)
#endif

/*  Wait for some communication since 'MPID_Progress_start'  */
int MPIDI_PSP_Progress_wait(MPID_Progress_state * state)
{
	int made_progress;
	int mpi_errno;

	/* Make progress on nonblocking collectives */
	mpi_errno = MPIDU_Sched_progress(&made_progress);
	assert(mpi_errno == MPI_SUCCESS);

	if (!made_progress) {
		/* Make progress on pscom requests */
		MPID_PSP_LOCKFREE_CALL(pscom_wait_any());
	}
	return MPI_SUCCESS;
}


void MPIDI_PSP_Progress_end(MPID_Progress_state * state)
{
}


/*
  MPID_Progress_test - Check for communication

  Return value:
  An mpi error code.

  Notes:
  Unlike 'MPID_Progress_wait', this routine is nonblocking.  Therefore, it
  does not require the use of 'MPID_Progress_start' and 'MPID_Progress_end'.
*/
int MPIDI_PSP_Progress_test(void)
{
	int made_progress;
	int mpi_errno;

	/* Make progress on nonblocking collectives */
	mpi_errno = MPIDU_Sched_progress(&made_progress);
	assert(mpi_errno == MPI_SUCCESS);

	pscom_test_any();
	return MPI_SUCCESS;
}

/*
  MPID_Progress_poke - Allow a progress engine to check for pending
  communication

  Return value:
  An mpi error code.

  Notes:
  This routine provides a way to invoke the progress engine in a polling
  implementation of the ADI.  This routine must be nonblocking.

  A multithreaded implementation is free to define this as an empty macro.

  ch3 use this: #define MPIDI_CH3_Progress_poke() (MPIDI_CH3_Progress_test())
*/
int MPIDI_PSP_Progress_poke(void)
{
	MPID_Progress_test();
	return MPI_SUCCESS;
}




int MPIDI_PSP_Wait(MPIR_Request *request)
{
	MPID_DEV_Request_wait(request);

	/* Dont use request after MPID_DEV_Request_wait(), until you hold one additional ref! */
	/* assert(MPID_Request_is_complete(request)); */

	return MPI_SUCCESS;
}
