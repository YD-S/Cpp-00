
#ifndef CPP00_CONTACT_H
#define CPP00_CONTACT_H
#include <iostream>

class Contact{
private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string Number;
	std::string DarkestSecret;
public:
	Contact();
	Contact(const std::string &firstName, const std::string &lastName, const std::string &nickName,
			const std::string &number, const std::string &darkestSecret);
	static Contact make_contact();
};

#endif
