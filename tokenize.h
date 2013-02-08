#ifndef TOKENIZE_H
#define TOKENIZE_H

#include "fileio.h"

typedef struct tokenlist tokenlist;

tokenlist *tokenize(file *);

#endif
