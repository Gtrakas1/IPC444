#include "Grades.h"


namespace sict {
	Grades::Grades(std::string File) {
		
			std::ifstream f(File);

			if (!f.is_open())
			{
				throw "Something went wrong.Try again";
			}
			if (f.is_open())
			{
				int count = 0;
				std::string line;

				while (getline(f, line))
				{
					count++;
				}
				f.clear();
				f.seekg(0, std::ios::beg);
				studentnum = new std::string[count];
				grade = new double[count];
				size = count;

				for (int i = 0; i < count; i++)
				{
					f >> studentnum[i];
					f >> grade[i];



				}
				f.close();
			}
			else
			{
				Grades();
			}
		
		

	}
	
	Grades::~Grades(){
		delete[] studentnum;
		delete[] grade;

	}
}