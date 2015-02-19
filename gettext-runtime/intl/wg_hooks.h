#ifndef WG_HOOKS_GUARD
#define WG_HOOKS_GUARD


#include <stddef.h>		/* Get size_t.  */

#ifndef uint64_t
typedef unsigned __int64 uint64_t;
#endif 

#ifndef uintmax_t
typedef uint64_t uintmax_t;
#endif

struct hooked_file_info
{
	size_t size;
	char* data;
};

typedef struct hooked_file_info (*gettext_file_reader_hook)(const char* filePath);
typedef char* (*gettext_locale_hook)();


#endif // WG_HOOKS_GUARD