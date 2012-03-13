/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC double FORT_CALL MPI_WTIME(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtime__(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtime(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtime_(void);

#if defined(F77_NAME_UPPER)
#pragma weak MPI_WTIME = PMPI_WTIME
#pragma weak mpi_wtime__ = PMPI_WTIME
#pragma weak mpi_wtime_ = PMPI_WTIME
#pragma weak mpi_wtime = PMPI_WTIME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WTIME = pmpi_wtime__
#pragma weak mpi_wtime__ = pmpi_wtime__
#pragma weak mpi_wtime_ = pmpi_wtime__
#pragma weak mpi_wtime = pmpi_wtime__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WTIME = pmpi_wtime_
#pragma weak mpi_wtime__ = pmpi_wtime_
#pragma weak mpi_wtime_ = pmpi_wtime_
#pragma weak mpi_wtime = pmpi_wtime_
#else
#pragma weak MPI_WTIME = pmpi_wtime
#pragma weak mpi_wtime__ = pmpi_wtime
#pragma weak mpi_wtime_ = pmpi_wtime
#pragma weak mpi_wtime = pmpi_wtime
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC double FORT_CALL MPI_WTIME(void);

#pragma weak MPI_WTIME = PMPI_WTIME
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC double FORT_CALL mpi_wtime__(void);

#pragma weak mpi_wtime__ = pmpi_wtime__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC double FORT_CALL mpi_wtime(void);

#pragma weak mpi_wtime = pmpi_wtime
#else
extern FORT_DLL_SPEC double FORT_CALL mpi_wtime_(void);

#pragma weak mpi_wtime_ = pmpi_wtime_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_WTIME  MPI_WTIME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_wtime__  mpi_wtime__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_wtime  mpi_wtime
#else
#pragma _HP_SECONDARY_DEF pmpi_wtime_  mpi_wtime_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_WTIME as PMPI_WTIME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_wtime__ as pmpi_wtime__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_wtime as pmpi_wtime
#else
#pragma _CRI duplicate mpi_wtime_ as pmpi_wtime_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC double FORT_CALL MPI_WTIME(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtime__(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtime(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtime_(void);

#if defined(F77_NAME_UPPER)
#pragma weak mpi_wtime__ = MPI_WTIME
#pragma weak mpi_wtime_ = MPI_WTIME
#pragma weak mpi_wtime = MPI_WTIME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WTIME = mpi_wtime__
#pragma weak mpi_wtime_ = mpi_wtime__
#pragma weak mpi_wtime = mpi_wtime__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WTIME = mpi_wtime_
#pragma weak mpi_wtime__ = mpi_wtime_
#pragma weak mpi_wtime = mpi_wtime_
#else
#pragma weak MPI_WTIME = mpi_wtime
#pragma weak mpi_wtime__ = mpi_wtime
#pragma weak mpi_wtime_ = mpi_wtime
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC double FORT_CALL PMPI_WTIME(void);
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtime__(void);
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtime_(void);
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtime(void);

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_wtime__ = PMPI_WTIME
#pragma weak pmpi_wtime_ = PMPI_WTIME
#pragma weak pmpi_wtime = PMPI_WTIME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_WTIME = pmpi_wtime__
#pragma weak pmpi_wtime_ = pmpi_wtime__
#pragma weak pmpi_wtime = pmpi_wtime__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_WTIME = pmpi_wtime_
#pragma weak pmpi_wtime__ = pmpi_wtime_
#pragma weak pmpi_wtime = pmpi_wtime_
#else
#pragma weak PMPI_WTIME = pmpi_wtime
#pragma weak pmpi_wtime__ = pmpi_wtime
#pragma weak pmpi_wtime_ = pmpi_wtime
#endif /* Test on name mapping */
#endif /* Use multiple pragma weak */

#ifdef F77_NAME_UPPER
#define mpi_wtime_ PMPI_WTIME
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_wtime_ pmpi_wtime__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_wtime_ pmpi_wtime
#else
#define mpi_wtime_ pmpi_wtime_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings,
   such as those put in place by the globus device when it is building on
   top of a vendor MPI. */
#undef MPI_Wtime
#define MPI_Wtime PMPI_Wtime 

#else

#ifdef F77_NAME_UPPER
#define mpi_wtime_ MPI_WTIME
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_wtime_ mpi_wtime__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_wtime_ mpi_wtime
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
#include "mpichconf.h"
#include "mpichtimer.h"
FORT_DLL_SPEC double FORT_CALL mpi_wtime_ ( void ) {
    double d; MPID_Time_t t;

    MPID_Wtime( &t );
    MPID_Wtime_todouble( &t, &d );
    return d;
}
