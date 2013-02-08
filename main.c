#include "tokenize.h"
#include "fileio.h"
#include "error.h"

int main(int argc, char *argv[])
{
	file *f;
	tokenlist *tl;

	if(argc != 2)
		return error("No input files");
	
	f = file_open(argv[1]);
	if(!f) return 0;

	tl = tokenize(f);

	return 0;

}
