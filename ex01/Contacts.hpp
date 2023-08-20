
#ifndef CONTACTS_HPP
#define CONTACTS_HPP
#include <iostream>
#include <iomanip>
#include <string>

class Contacts {
public:
	Contacts();
	~Contacts();
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickname(std::string nickname);
	void setPhoneNumber(std::string phoneNumber);
	void setDarkestSecret(std::string darkestSecret);
	int check_If_Number(std::string str);


	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

};


#endif
