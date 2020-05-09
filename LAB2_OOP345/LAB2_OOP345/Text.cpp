/********************************************
Name: George Trakas
Student ID: 108459173
Date: May 1st,2018
Purpose: Lab 2 OOP345
**********************************************/
#include "Text.h"


namespace sict {

	Text::Text()
	{
		
		strings = nullptr;
	}
	Text::Text(const std::string filenm)
	{
		std::ifstream f(filenm, std::ifstream::in);


		if (f.is_open())
		{
			int count = 0;
			std::string line;

			do
			{
				getline(f, line, '\n');
				count++;

			} while (!f.fail());

			f.clear();
			f.seekg(0, std::ios::beg);
			strings = new std::string[count];


			for (int i = 0; !f.fail(); i++) {
				getline(f, strings[i], '\n');
			}
			Size = count;
			f.close();

		}
		else {
			Text();


		}




	}
	Text::Text(Text &src)
	{

		*this = src;
	}
	Text & Text::operator=( Text &src)
	{
		if (this != &src)
		{

			delete[] strings;
			strings = nullptr;
			if (src.strings != nullptr) {
				Size = src.Size;
				strings = new std::string[Size];
				for (size_t i = 0; i < Size; i++)
				{
					strings[i] = src.strings[i];
				}
			}
		}
		return *this;
	}

	Text::Text(Text && src)

	{
		strings = src.strings;
		Size = src.Size;
		src.strings = nullptr;
		*this = std::move(src);
	}

	Text & Text::operator=( Text && src)
	{

		// TODO: insert return statement here
		if (this != &src)
		{
			
			delete[] strings;
			Size = src.Size;
			strings = src.strings;
			src.strings = nullptr;

		}
		return  *this;

	}
	size_t Text::size() const
	{
		return size_t(Size);
	}
	Text::~Text()
	{
		delete[] strings;
		strings = nullptr;
	}

}
