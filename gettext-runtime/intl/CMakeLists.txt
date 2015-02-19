CMAKE_MINIMUM_REQUIRED( VERSION 2.8 )
PROJECT( gettext )

# Additional include directories

ADD_DEFINITIONS(
	-fp:fast  # Fast floating point model
)

# Windows version definitions
ADD_DEFINITIONS(
	-DNTDDI_VERSION=0x05010000 # NTDDI_WINXP
	-D_WIN32_WINNT=0x0501   # Windows XP
	-D_WIN32_WINDOWS=0x0501
	-D_WIN32_IE=0x0600
)

# Standard preprocessor definitions
ADD_DEFINITIONS(
	-D_CRT_SECURE_NO_WARNINGS
	-D_CRT_NONSTDC_NO_DEPRECATE
	-D_CRT_SECURE_NO_DEPRECATE
	-D_CRT_NONSTDC_NO_DEPRECATE
	#-DD3DXFX_LARGEADDRESS_HANDLE # NOT YET FOR WOWP
)

ADD_DEFINITIONS( -D_SECURE_SCL=0 )

ADD_DEFINITIONS( -DUNICODE -D_UNICODE )

# Remove /STACK:10000000 set by CMake. This value for stack size
# is very high, limiting the number of threads we can spawn.
# Default value used by Windows is 1MB which is good enough.
STRING( REGEX REPLACE "/STACK:[0-9]+" ""
	CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS}" )


ADD_DEFINITIONS(
	-D_LIB
)

INCLUDE_DIRECTORIES( . )

REMOVE_DEFINITIONS( -WX )

ADD_DEFINITIONS(
	-DIN_LIBINTL
	-DHAVE_ALLOCA
	-DFILE_SYSTEM_BACKSLASH_IS_FILE_NAME_SEPARATOR
	-DHAVE_GETCWD
	-DBUILDING_DLL
	-DHAVE_CONFIG_H
	-DHAVE_POSIX_PRINTF
	-DUSE_WIN32_THREADS
	-DHAVE_SNPRINTF
	-DHAVE_DECL__SNPRINTF
	-D_STDLIB_H
	-DBUILDING_GETTEXT
)

SET( ALL_SRCS
	bindtextdom.c
	dcgettext.c
	dcigettext.c
	dcngettext.c
	dgettext.c
	dngettext.c
	eval-plural.h
	explodename.c
	finddomain.c
	gettext.c
	gettextP.h
	gmo.h
	hash-string.c
	hash-string.h
	l10nflist.c
	langprefs.c
	loadinfo.h
	loadmsgcat.c
	localcharset.c
	localcharset.h
	localealias.c
	localename.c
	lock.c
	lock.h
	log.c
	ngettext.c
	plural-exp.c
	plural-exp.h
	plural.c
	relocatable.c
	relocatable.h
	textdomain.c
	tsearch.c
	tsearch.h
	version.c
#	wg_hooks.c
	libgnuintl.h
	config.h
)
SOURCE_GROUP( "" FILES ${ALL_SRCS} )

ADD_LIBRARY( gettext SHARED
	${ALL_SRCS}
)

SET_TARGET_PROPERTIES( gettext PROPERTIES
		DEBUG_OUTPUT_NAME
		"gettext_d" )

SET_TARGET_PROPERTIES( gettext PROPERTIES
		RELEASE_OUTPUT_NAME
		"gettext_r" )



