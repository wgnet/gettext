/* Define to rpl_ if the getopt replacement functions and variables should be
   used. */
#undef __GETOPT_PREFIX

/* Define to `int' if <sys/types.h> doesn't define. */
#undef gid_t

/* Define to `__INLINE__' or `__INLINE' if that's what the C compiler
   calls it, or to nothing if 'INLINE' is not supported under any name.  */
#ifndef __cplusplus
#undef INLINE
#endif

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern INLINE' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for MacOS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Define to a type if <wchar.h> does not define. */
#undef mbstate_t

/* Define to the type of st_nlink in struct stat, or a supertype. */
#undef nlink_t

/* Define as the type of the result of subtracting two pointers, if the system
   doesn't define it. */
#undef ptrdiff_t

/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
   is a misnomer outside of parameter lists.  */
#define _UNUSED_PARAMETER_ _GL_UNUSED



#define __libc_lock_t                   gl_lock_t
#define __libc_lock_define              gl_lock_define
#define __libc_lock_define_initialized  gl_lock_define_initialized
#define __libc_lock_init                gl_lock_init
#define __libc_lock_lock                gl_lock_lock
#define __libc_lock_unlock              gl_lock_unlock
#define __libc_lock_recursive_t                   gl_recursive_lock_t
#define __libc_lock_define_recursive              gl_recursive_lock_define
#define __libc_lock_define_initialized_recursive  gl_recursive_lock_define_initialized
#define __libc_lock_init_recursive                gl_recursive_lock_init
#define __libc_lock_lock_recursive                gl_recursive_lock_lock
#define __libc_lock_unlock_recursive              gl_recursive_lock_unlock
#define glthread_in_use  libintl_thread_in_use
#define glthread_lock_init_func     libintl_lock_init_func
#define glthread_lock_lock_func     libintl_lock_lock_func
#define glthread_lock_unlock_func   libintl_lock_unlock_func
#define glthread_lock_destroy_func  libintl_lock_destroy_func
#define glthread_rwlock_init_multithreaded     libintl_rwlock_init_multithreaded
#define glthread_rwlock_init_func              libintl_rwlock_init_func
#define glthread_rwlock_rdlock_multithreaded   libintl_rwlock_rdlock_multithreaded
#define glthread_rwlock_rdlock_func            libintl_rwlock_rdlock_func
#define glthread_rwlock_wrlock_multithreaded   libintl_rwlock_wrlock_multithreaded
#define glthread_rwlock_wrlock_func            libintl_rwlock_wrlock_func
#define glthread_rwlock_unlock_multithreaded   libintl_rwlock_unlock_multithreaded
#define glthread_rwlock_unlock_func            libintl_rwlock_unlock_func
#define glthread_rwlock_destroy_multithreaded  libintl_rwlock_destroy_multithreaded
#define glthread_rwlock_destroy_func           libintl_rwlock_destroy_func
#define glthread_recursive_lock_init_multithreaded     libintl_recursive_lock_init_multithreaded
#define glthread_recursive_lock_init_func              libintl_recursive_lock_init_func
#define glthread_recursive_lock_lock_multithreaded     libintl_recursive_lock_lock_multithreaded
#define glthread_recursive_lock_lock_func              libintl_recursive_lock_lock_func
#define glthread_recursive_lock_unlock_multithreaded   libintl_recursive_lock_unlock_multithreaded
#define glthread_recursive_lock_unlock_func            libintl_recursive_lock_unlock_func
#define glthread_recursive_lock_destroy_multithreaded  libintl_recursive_lock_destroy_multithreaded
#define glthread_recursive_lock_destroy_func           libintl_recursive_lock_destroy_func
#define glthread_once_func            libintl_once_func
#define glthread_once_singlethreaded  libintl_once_singlethreaded
#define glthread_once_multithreaded   libintl_once_multithreaded

#if defined _MSC_VER
#define INLINE __inline
#else
#define INLINE inline
#endif

#define LOCALE_ALIAS_PATH ""
#define LOCALEDIR ""

