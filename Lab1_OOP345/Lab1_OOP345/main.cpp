/* Name: George Trakas
   ID: 108459173
   Date: May 11, 2018
   Purpose: Linkage*/
#include "process.h"
#include <iostream>

int main(int argc, char* argv[])
{
	//forward declaration
	extern int STORED;
	int i;
		std::cout << "Command Line :";
	
	for (int i = 0; i < argc; i++)
	{
		std::cout << " " << argv[i];
	}
	std::cout << "\n";
	if (argc <=1)
	{
		std::cout << "Insufficient number of arguments (min 1)";
		system("pause");
		return 1;
	}
	std::cout << "Maximum number of characters stored :" << STORED << std::endl;
	for (int j = 1; j < argc; j++)
	{
		process(argv[j]);
	}

	system("pause");
	return 0;
	}