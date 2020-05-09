#include <iostream>
#include <string>
#include <fstream>

namespace sict {

	class Grades {
		std::string* studentnum;
		double* grade;
		size_t size;
	public:
		Grades() : studentnum(nullptr), grade(0), size(0) {}
		~Grades();
		Grades(std::string File);
		template<typename T>
		void displayGrades(std::ostream& os, T F)
		{
			for (int i = 0; i < size; i++)
			{
				os << studentnum[i] <<" "<< grade[i]<<" " << F(grade[i]) << "\n";
			}
		}

	};
}