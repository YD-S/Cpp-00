
#include "Contact.h"

Contact::Contact(const std::string &firstName, const std::string &lastName, const std::string &nickName,
				 const std::string &number, const std::string &darkestSecret) : FirstName(firstName),
																				LastName(lastName), NickName(nickName),
																				Number(number),
																				DarkestSecret(darkestSecret) {}

Contact::Contact(){}

Contact Contact::make_contact() {
	std::string Fname;
	std::string Lname;
	std::string Nname;
	std::string Num;
	std::string Secret;

	std::cout << "First Name: ";
	std::getline(std::cin, Fname);
	std::cout << "Last Name: ";
	std::getline(std::cin, Lname);
	std::cout << "Nick Name: ";
	std::getline(std::cin, Nname);
	std::cout << "Phone Number: ";
	std::getline(std::cin, Num);
	std::cout << "Your Darkest Secret";
	std::getline(std::cin, Secret);
	return Contact();
}

