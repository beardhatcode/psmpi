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
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_MATCH_SIZE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_match_size__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_match_size( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_match_size_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_match_size_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_TYPE_MATCH_SIZE = pmpi_type_match_size__
#pragma weak mpi_type_match_size__ = pmpi_type_match_size__
#pragma weak mpi_type_match_size_ = pmpi_type_match_size__
#pragma weak mpi_type_match_size = pmpi_type_match_size__
#pragma weak pmpi_type_match_size_ = pmpi_type_match_size__


#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_MATCH_SIZE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_TYPE_MATCH_SIZE = PMPI_TYPE_MATCH_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_match_size__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_type_match_size__ = pmpi_type_match_size__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_match_size( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_type_match_size = pmpi_type_match_size
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_type_match_size_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_type_match_size_ = pmpi_type_match_size_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_TYPE_MATCH_SIZE  MPI_TYPE_MATCH_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_match_size__  mpi_type_match_size__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_match_size  mpi_type_match_size
#else
#pragma _HP_SECONDARY_DEF pmpi_type_match_size_  mpi_type_match_size_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_TYPE_MATCH_SIZE as PMPI_TYPE_MATCH_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_type_match_size__ as pmpi_type_match_size__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_type_match_size as pmpi_type_match_size
#else
#pragma _CRI duplicate mpi_type_match_size_ as pmpi_type_match_size_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYBMOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_MATCH_SIZE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_match_size__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_match_size( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_match_size_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_TYPE_MATCH_SIZE = mpi_type_match_size__
#pragma weak mpi_type_match_size_ = mpi_type_match_size__
#pragma weak mpi_type_match_size = mpi_type_match_size__
#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#ifdef F77_NAME_UPPER
#define mpi_type_match_size_ PMPI_TYPE_MATCH_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_match_size_ pmpi_type_match_size__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_match_size_ pmpi_type_match_size
#else
#define mpi_type_match_size_ pmpi_type_match_size_
#endif
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings,
   such as those put in place by the globus device when it is building on
   top of a vendor MPI. */
#undef MPI_Type_match_size
#define MPI_Type_match_size PMPI_Type_match_size 

#else

#ifdef F77_NAME_UPPER
#define mpi_type_match_size_ MPI_TYPE_MATCH_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_match_size_ mpi_type_match_size__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_match_size_ mpi_type_match_size
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_type_match_size_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *ierr ){
    *ierr = MPI_Type_match_size( *v1, *v2, (MPI_Datatype *)(v3) );
}
