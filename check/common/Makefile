checks_SOURCES		= checks.c check_common.c check_misc.c check_crypto.c check_error.c
checks_CFLAGS		= $(DONNA_CFLAGS) $(LIBCOMMON_CFLAGS) $(OPENSSL_CFLAGS)
checks_LDADD		= $(DONNA_LIBS) $(LIBCOMMON_LIBS) $(OPENSSL_LIBS)
CLEANFILES		= *.pem

include ../../check.mk
