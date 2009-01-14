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
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK) && defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_GET_NAME( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_get_name__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_get_name( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_get_name_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_get_name_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_COMM_GET_NAME = pmpi_comm_get_name__
#pragma weak mpi_comm_get_name__ = pmpi_comm_get_name__
#pragma weak mpi_comm_get_name_ = pmpi_comm_get_name__
#pragma weak mpi_comm_get_name = pmpi_comm_get_name__
#pragma weak pmpi_comm_get_name_ = pmpi_comm_get_name__


#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_GET_NAME( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_COMM_GET_NAME = PMPI_COMM_GET_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_get_name__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_comm_get_name__ = pmpi_comm_get_name__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_get_name( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_comm_get_name = pmpi_comm_get_name
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_get_name_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_comm_get_name_ = pmpi_comm_get_name_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_COMM_GET_NAME  MPI_COMM_GET_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_get_name__  mpi_comm_get_name__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_get_name  mpi_comm_get_name
#else
#pragma _HP_SECONDARY_DEF pmpi_comm_get_name_  mpi_comm_get_name_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_COMM_GET_NAME as PMPI_COMM_GET_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_comm_get_name__ as pmpi_comm_get_name__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_comm_get_name as pmpi_comm_get_name
#else
#pragma _CRI duplicate mpi_comm_get_name_ as pmpi_comm_get_name_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYBMOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_GET_NAME( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_get_name__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_get_name( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_get_name_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_COMM_GET_NAME = mpi_comm_get_name__
#pragma weak mpi_comm_get_name_ = mpi_comm_get_name__
#pragma weak mpi_comm_get_name = mpi_comm_get_name__
#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#ifdef F77_NAME_UPPER
#define mpi_comm_get_name_ PMPI_COMM_GET_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_get_name_ pmpi_comm_get_name__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_get_name_ pmpi_comm_get_name
#else
#define mpi_comm_get_name_ pmpi_comm_get_name_
#endif
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings,
   such as those put in place by the globus device when it is building on
   top of a vendor MPI. */
#undef MPI_Comm_get_name
#define MPI_Comm_get_name PMPI_Comm_get_name 

#else

#ifdef F77_NAME_UPPER
#define mpi_comm_get_name_ MPI_COMM_GET_NAME
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_get_name_ mpi_comm_get_name__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_get_name_ mpi_comm_get_name
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_comm_get_name_ ( MPI_Fint *v1, char *v2 FORT_MIXED_LEN(d2), MPI_Fint *v3, MPI_Fint *ierr FORT_END_LEN(d2) ){
    char *p2;
    p2 = (char *)MPIU_Malloc( d2 + 1 );
    *ierr = MPI_Comm_get_name( (MPI_Comm)(*v1), p2, v3 );

    {char *p = v2, *pc=p2;
        while (*pc) {*p++ = *pc++;}
        while ((p-v2) < d2) { *p++ = ' '; }
    }
    MPIU_Free( p2 );
}
