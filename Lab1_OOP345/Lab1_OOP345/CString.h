/* Name: George Trakas
ID: 108459173
Date: May 11, 2018
Purpose: Linkage*/
#ifndef _Cstring_H_
#define _Cstring_H_
#include <iostream>


namespace w1 {
	const int max_char= 3;
	class Cstring {
		char str[max_char + 1];
	public:
        Cstring(const char *string);
		void display(std::ostream &os) const;
	};
	std::ostream &operator<<(std::ostream &os, const Cstring &cstr);

}

#endif // !_Cstring_H_
