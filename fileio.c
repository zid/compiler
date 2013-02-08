#include <stdio.h>
#include <stdlib.h>
#include "fileio.h"
#include "error.h"

struct file {
	FILE *f;
};

file *file_open(const char *filename)
{
	struct file *f_out;
	FILE *f_in;

	f_in = fopen(filename, "rb");
	if(!f_in)
	{
		error("%s\n", filename);
		return NULL;
	}

	f_out = malloc(sizeof(struct file));
	f_out->f = f_in;

	return f_out;
}

