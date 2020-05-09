/* Name: George Trakas
ID: 108459173
Date: May 11, 2018
Purpose: Linkage*/
#include <cstring>
#include "Cstring.h"
int STORED = w1::max_char;

namespace w1 {

	Cstring::Cstring(const char * string)
	{
		if (string != nullptr)
		{
			strncpy_s(str, string, max_char);
			str[max_char] = '\0';
		}
		else
		{
			str[0] = '\0';
		}

	}
	void Cstring::display(std::ostream &os) const
	{
		os << str;

	}

	std::ostream & operator<<(std::ostream & os, const Cstring & cstr)
	{
		// TODO: insert return statement here
		static int insert = 0;
		os << insert++ << " : ";
		cstr.display(os);
		return os;

	}

}