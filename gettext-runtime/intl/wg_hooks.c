#include "wg_hooks_internal.h"
#include "libgnuintl.h"

gettext_locale_hook getLocaleHook = NULL;
gettext_file_reader_hook fileReaderHook = NULL;

void setGetLocaleHook(gettext_locale_hook hook)
{
	getLocaleHook = hook;
}

void setFileReaderHook(gettext_file_reader_hook hook)
{
	fileReaderHook = hook;
}