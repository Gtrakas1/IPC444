#ifndef sict_Notifications_H
#define sict_Notifications_H

#include <iostream>
#include <vector>
#include "Message.h"

namespace sict
{
	class Notifications
	{
		std::vector <Message> m_messages;

	public:
		Notifications(std::ifstream& rhs);
		Notifications(Notifications&&);
		Notifications& operator=(Notifications&& rhs);
		~Notifications();
		void display(std::ostream& os) const;
	};
}
#endif // !sict_Notifications_H
