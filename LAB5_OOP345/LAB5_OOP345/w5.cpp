// Workshop 5 - Lambda Expression
// w5.cpp
// Chris Szalwinski
// 2018-05-23

#include <iostream>
#include "Grades.h"
#include "Letter.h"
using namespace sict;

int main(int argc, char* argv[]) {
	std::cout << "Command Line : ";
	for (int i = 0; i < argc; i++) {
		std::cout << argv[i] << ' ';
	}
	std::cout << std::endl;

	if (argc == 1) {
		std::cerr <<
			"\n*** Insufficient number of arguments ***\n";
		std::cerr << "Usage: " << argv[0] << " fileName \n";
		return 1;
	}
	else if (argc != 2) {
		std::cerr << "\n*** Too many arguments ***\n";
		std::cerr << "Usage: " << argv[0] << " fileName \n";
		return 2;
	}


	sict::Grades grades(argv[1]);
	try {// lambda expression for converting to letter 
		auto letter = [&](double grades)->std::string
		{ std::string grading;
		if (grades >= 90)
		{
			grading = "A+";
		}
		else if (grades >= 80)
		{
			grading = "A";
		}
		else if (grades >= 75)
		{
			grading = "B+";
		}
		else if (grades >= 70)
		{
			grading = "B";
		}
		else if (grades >= 65)
		{
			grading = "C+";
		}
		else if (grades >= 60)
		{
			grading = "C";
		}
		else if (grades >= 55)
		{
			grading = "D+";
		}
		else if (grades >= 50)
		{
			grading = "D";
		}
			else
		{
			grading = "F";
		}
		return grading;

		};


		grades.displayGrades(std::cout, letter);
		system("pause");
	}
	catch(std::ifstream::failure){
		// report the error message
		std::cerr << argv[0] << ": Failed to open file "
			<< argv[1] << "\n";
		system("pause");

		return 2;
	}
	}
 