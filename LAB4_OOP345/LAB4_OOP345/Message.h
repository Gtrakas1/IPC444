#ifndef sict_Message_h
#define sict_Message_h

#include <iostream>
#include <string>

namespace sict
{
	class Message
	{
		std::string f_str, s_str, t_str;

	public:
		Message(std::ifstream& in, char c);
		void display(std::ostream&) const;
	};
}
#endif //sict_MESSAGE_H
