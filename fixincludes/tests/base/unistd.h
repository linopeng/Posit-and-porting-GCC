/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/unistd.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( AIX_UNISTD_CHECK )
	static int		getdtablesize(void)
#endif  /* AIX_UNISTD_CHECK */


#if defined( ALPHA_SBRK_CHECK )
extern void *sbrk(ptrdiff_t increment);
#endif  /* ALPHA_SBRK_CHECK */
