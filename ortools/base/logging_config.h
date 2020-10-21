#ifndef ORTOOLS_BASE_LOGGING_CONFIG_H
#define ORTOOLS_BASE_LOGGING_CONFIG_H

/* Define if you have the `dladdr' function */
#define HAVE_DLADDR

/* Define if you have the `snprintf' function */
#define HAVE_SNPRINTF

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H

/* Define if you have the `fcntl' function */
#define HAVE_FCNTL

/* Define to 1 if you have the <glob.h> header file. */
#define HAVE_GLOB_H

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <libunwind.h> header file. */
#define HAVE_LIBUNWIND_H

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H

/* define if the compiler implements namespaces */
#define HAVE_NAMESPACES

/* Define if you have the 'pread' function */
#define HAVE_PREAD

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H

/* Define if you have the 'pwrite' function */
#define HAVE_PWRITE

/* define if the compiler implements pthread_rwlock_* */
#define HAVE_RWLOCK

/* Define if you have the 'sigaction' function */
#define HAVE_SIGACTION

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/syscall.h> header file. */
#define HAVE_SYS_SYSCALL_H

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <unwind.h> header file. */
#define HAVE_UNWIND_H 1

/* define if the compiler supports using expression for operator */
#define HAVE_USING_OPERATOR

/* define if your compiler has __attribute__ */
#define HAVE___ATTRIBUTE__

/* define if your compiler has __builtin_expect */
#define HAVE___BUILTIN_EXPECT 1

/* define if your compiler has __sync_val_compare_and_swap */
#define HAVE___SYNC_VAL_COMPARE_AND_SWAP

/* define if symbolize support is available */
#define HAVE_SYMBOLIZE

/* define if localtime_r is available in time.h */
#define HAVE_LOCALTIME_R

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to necessary thread-local storage attribute. */
#define GLOG_THREAD_LOCAL_STORAGE __thread

/* Check whether aligned_storage and alignof present */
#define HAVE_ALIGNED_STORAGE 1

#endif  // ORTOOLS_BASE_LOGGING_CONFIG_H
