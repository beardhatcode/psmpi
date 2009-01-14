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
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_AT( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_at__( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_at( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_at_( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_at_( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_FILE_WRITE_AT = pmpi_file_write_at__
#pragma weak mpi_file_write_at__ = pmpi_file_write_at__
#pragma weak mpi_file_write_at_ = pmpi_file_write_at__
#pragma weak mpi_file_write_at = pmpi_file_write_at__
#pragma weak pmpi_file_write_at_ = pmpi_file_write_at__


#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_AT( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_FILE_WRITE_AT = PMPI_FILE_WRITE_AT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_at__( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_file_write_at__ = pmpi_file_write_at__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_at( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_file_write_at = pmpi_file_write_at
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_at_( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_file_write_at_ = pmpi_file_write_at_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_FILE_WRITE_AT  MPI_FILE_WRITE_AT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_write_at__  mpi_file_write_at__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_write_at  mpi_file_write_at
#else
#pragma _HP_SECONDARY_DEF pmpi_file_write_at_  mpi_file_write_at_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_FILE_WRITE_AT as PMPI_FILE_WRITE_AT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_file_write_at__ as pmpi_file_write_at__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_file_write_at as pmpi_file_write_at
#else
#pragma _CRI duplicate mpi_file_write_at_ as pmpi_file_write_at_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYBMOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_AT( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_at__( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_at( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_at_( MPI_Fint *, MPI_Offset *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_FILE_WRITE_AT = mpi_file_write_at__
#pragma weak mpi_file_write_at_ = mpi_file_write_at__
#pragma weak mpi_file_write_at = mpi_file_write_at__
#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#ifdef F77_NAME_UPPER
#define mpi_file_write_at_ PMPI_FILE_WRITE_AT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_write_at_ pmpi_file_write_at__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_write_at_ pmpi_file_write_at
#else
#define mpi_file_write_at_ pmpi_file_write_at_
#endif
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings,
   such as those put in place by the globus device when it is building on
   top of a vendor MPI. */
#undef MPI_File_write_at
#define MPI_File_write_at PMPI_File_write_at 

#else

#ifdef F77_NAME_UPPER
#define mpi_file_write_at_ MPI_FILE_WRITE_AT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_write_at_ mpi_file_write_at__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_write_at_ mpi_file_write_at
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_file_write_at_ ( MPI_Fint *v1, MPI_Offset *v2, void*v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *v6, MPI_Fint *ierr ){
#ifdef MPI_MODE_RDONLY
    *ierr = MPI_File_write_at( MPI_File_f2c(*v1), *v2, v3, *v4, (MPI_Datatype)(*v5), (MPI_Status *)(v6) );
#else
*ierr = MPI_ERR_INTERN;
#endif
}
