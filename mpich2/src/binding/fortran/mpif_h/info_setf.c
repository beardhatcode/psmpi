/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_INFO_SET = PMPI_INFO_SET
#pragma weak mpi_info_set__ = PMPI_INFO_SET
#pragma weak mpi_info_set_ = PMPI_INFO_SET
#pragma weak mpi_info_set = PMPI_INFO_SET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INFO_SET = pmpi_info_set__
#pragma weak mpi_info_set__ = pmpi_info_set__
#pragma weak mpi_info_set_ = pmpi_info_set__
#pragma weak mpi_info_set = pmpi_info_set__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INFO_SET = pmpi_info_set_
#pragma weak mpi_info_set__ = pmpi_info_set_
#pragma weak mpi_info_set_ = pmpi_info_set_
#pragma weak mpi_info_set = pmpi_info_set_
#else
#pragma weak MPI_INFO_SET = pmpi_info_set
#pragma weak mpi_info_set__ = pmpi_info_set
#pragma weak mpi_info_set_ = pmpi_info_set
#pragma weak mpi_info_set = pmpi_info_set
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak MPI_INFO_SET = PMPI_INFO_SET
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak mpi_info_set__ = pmpi_info_set__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak mpi_info_set = pmpi_info_set
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#pragma weak mpi_info_set_ = pmpi_info_set_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_INFO_SET  MPI_INFO_SET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_info_set__  mpi_info_set__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_info_set  mpi_info_set
#else
#pragma _HP_SECONDARY_DEF pmpi_info_set_  mpi_info_set_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_INFO_SET as PMPI_INFO_SET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_info_set__ as pmpi_info_set__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_info_set as pmpi_info_set
#else
#pragma _CRI duplicate mpi_info_set_ as pmpi_info_set_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_SET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_SET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_SET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_SET")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_info_set__ = MPI_INFO_SET
#pragma weak mpi_info_set_ = MPI_INFO_SET
#pragma weak mpi_info_set = MPI_INFO_SET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INFO_SET = mpi_info_set__
#pragma weak mpi_info_set_ = mpi_info_set__
#pragma weak mpi_info_set = mpi_info_set__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INFO_SET = mpi_info_set_
#pragma weak mpi_info_set__ = mpi_info_set_
#pragma weak mpi_info_set = mpi_info_set_
#else
#pragma weak MPI_INFO_SET = mpi_info_set
#pragma weak mpi_info_set__ = mpi_info_set
#pragma weak mpi_info_set_ = mpi_info_set
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INFO_SET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INFO_SET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INFO_SET")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_set__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_set__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_set__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_set_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_set_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_set_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_set")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_set")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_set")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_info_set__ = PMPI_INFO_SET
#pragma weak pmpi_info_set_ = PMPI_INFO_SET
#pragma weak pmpi_info_set = PMPI_INFO_SET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_INFO_SET = pmpi_info_set__
#pragma weak pmpi_info_set_ = pmpi_info_set__
#pragma weak pmpi_info_set = pmpi_info_set__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_INFO_SET = pmpi_info_set_
#pragma weak pmpi_info_set__ = pmpi_info_set_
#pragma weak pmpi_info_set = pmpi_info_set_
#else
#pragma weak PMPI_INFO_SET = pmpi_info_set
#pragma weak pmpi_info_set__ = pmpi_info_set
#pragma weak pmpi_info_set_ = pmpi_info_set
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_SET")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_SET")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_SET")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_set( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_SET( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_set__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_set_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_set")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_info_set_ PMPI_INFO_SET
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_info_set_ pmpi_info_set__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_info_set_ pmpi_info_set
#else
#define mpi_info_set_ pmpi_info_set_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Info_set
#define MPI_Info_set PMPI_Info_set 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_info_set_ MPI_INFO_SET
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_info_set_ mpi_info_set__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_info_set_ mpi_info_set
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_info_set_ ( MPI_Fint *v1, char *v2 FORT_MIXED_LEN(d2), char *v3 FORT_MIXED_LEN(d3), MPI_Fint *ierr FORT_END_LEN(d2) FORT_END_LEN(d3) ){
    char *p2;
    char *p3;

    {char *p = v2 + d2 - 1;
     char *pin = v2;
     int  li;
        while (*p == ' ' && p > v2) p--;
        p++;
        while (*pin == ' ' && pin < p) pin++;
        p2 = (char *)malloc(p-pin + 1);
        for (li=0; li<(p-pin); li++) { p2[li] = pin[li]; }
        p2[li] = 0; 
    }

    {char *p = v3 + d3 - 1;
     char *pin = v3;
     int  li;
        while (*p == ' ' && p > v3) p--;
        p++;
        while (*pin == ' ' && pin < p) pin++;
        p3 = (char *)malloc(p-pin + 1);
        for (li=0; li<(p-pin); li++) { p3[li] = pin[li]; }
        p3[li] = 0; 
    }
    *ierr = MPI_Info_set( (MPI_Info)(*v1), p2, p3 );
    free( p2 );
    free( p3 );
}
