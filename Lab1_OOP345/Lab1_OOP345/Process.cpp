/* Name: George Trakas
ID: 108459173
Date: May 11, 2018
Purpose: Linkage*/
#include "Cstring.h"
#include "process.h"

void process(const char * string)
{
	w1::Cstring Str(string);
	std::cout << Str << "\n";
}
