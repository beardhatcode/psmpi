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
extern FORT_DLL_SPEC void FORT_CALL MPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_PUT = PMPI_PUT
#pragma weak mpi_put__ = PMPI_PUT
#pragma weak mpi_put_ = PMPI_PUT
#pragma weak mpi_put = PMPI_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_PUT = pmpi_put__
#pragma weak mpi_put__ = pmpi_put__
#pragma weak mpi_put_ = pmpi_put__
#pragma weak mpi_put = pmpi_put__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_PUT = pmpi_put_
#pragma weak mpi_put__ = pmpi_put_
#pragma weak mpi_put_ = pmpi_put_
#pragma weak mpi_put = pmpi_put_
#else
#pragma weak MPI_PUT = pmpi_put
#pragma weak mpi_put__ = pmpi_put
#pragma weak mpi_put_ = pmpi_put
#pragma weak mpi_put = pmpi_put
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_PUT = PMPI_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_put__ = pmpi_put__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_put = pmpi_put
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_put_ = pmpi_put_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_PUT  MPI_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_put__  mpi_put__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_put  mpi_put
#else
#pragma _HP_SECONDARY_DEF pmpi_put_  mpi_put_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_PUT as PMPI_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_put__ as pmpi_put__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_put as pmpi_put
#else
#pragma _CRI duplicate mpi_put_ as pmpi_put_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PUT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PUT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PUT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PUT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_put__ = MPI_PUT
#pragma weak mpi_put_ = MPI_PUT
#pragma weak mpi_put = MPI_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_PUT = mpi_put__
#pragma weak mpi_put_ = mpi_put__
#pragma weak mpi_put = mpi_put__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_PUT = mpi_put_
#pragma weak mpi_put__ = mpi_put_
#pragma weak mpi_put = mpi_put_
#else
#pragma weak MPI_PUT = mpi_put
#pragma weak mpi_put__ = mpi_put
#pragma weak mpi_put_ = mpi_put
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_PUT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_PUT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_PUT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_put__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_put__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_put__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_put_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_put_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_put_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_put")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_put")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_put")));
extern FORT_DLL_SPEC void FORT_CALL mpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_put__ = PMPI_PUT
#pragma weak pmpi_put_ = PMPI_PUT
#pragma weak pmpi_put = PMPI_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_PUT = pmpi_put__
#pragma weak pmpi_put_ = pmpi_put__
#pragma weak pmpi_put = pmpi_put__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_PUT = pmpi_put_
#pragma weak pmpi_put__ = pmpi_put_
#pragma weak pmpi_put = pmpi_put_
#else
#pragma weak PMPI_PUT = pmpi_put
#pragma weak pmpi_put__ = pmpi_put
#pragma weak pmpi_put_ = pmpi_put
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PUT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PUT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PUT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_put( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_PUT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_put__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_put_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_put")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_put_ PMPI_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_put_ pmpi_put__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_put_ pmpi_put
#else
#define mpi_put_ pmpi_put_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Put
#define MPI_Put PMPI_Put 

#else

#ifdef F77_NAME_UPPER
#define mpi_put_ MPI_PUT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_put_ mpi_put__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_put_ mpi_put
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_put_ ( void*v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Aint * v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *v8, MPI_Fint *ierr ){
    *ierr = MPI_Put( v1, (int)*v2, (MPI_Datatype)(*v3), (int)*v4, *v5, (int)*v6, (MPI_Datatype)(*v7), (MPI_Win)*v8 );
}
