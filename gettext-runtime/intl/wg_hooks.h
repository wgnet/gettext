#ifndef WG_HOOKS_GUARD
#define WG_HOOKS_GUARD

struct hooked_file_info
{
	size_t size;
	char* data;
};

typedef struct hooked_file_info (*gettext_file_reader_hook)(const char* filePath);
typedef char* (*gettext_locale_hook)();


#endif // WG_HOOKS_GUARD