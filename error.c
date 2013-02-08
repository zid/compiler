#include <stdio.h>
#include <stdarg.h>
#include <errno.h>
#include "config.h"
#include "error.h"

int error(const char *fmt, ...)
{
	va_list ap;
	char buf[256];
	int err = errno;

	va_start(ap, fmt);
	vsnprintf(buf, 256, fmt, ap);
	va_end(ap);

	fprintf(stderr, NAME ": %s\n", buf);

	return err;
}
