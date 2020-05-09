/********************************************
Name: George Trakas
Student ID: 108459173
Date: May 1st,2018
Purpose: Lab 2 OOP345
**********************************************/
#ifndef Text_H
#define Text_H
#include <iostream>
#include <string>
#include <fstream>

namespace sict {
	class Text
	{
		std::string* strings;
		size_t Size;
	public:
		Text();
		Text(const std::string filenm);
		Text(Text &src);
		Text & operator=(Text & src);
		Text(Text && src);
		Text & operator=(Text && src);

        size_t size() const;
		~Text();

	};

	}
#endif // !Text_H
