#include "Contacts.hpp"

Contacts::Contacts() {
}

Contacts::~Contacts() {
}

void Contacts::setFirstName(std::string firstName) {
	int i = firstName.length();
	if (i < 10)
		this->_firstName = firstName;
	else{
		std::cout << "First name too long! Truncating to 10 characters." << std::endl;
		this->_firstName = firstName.substr(0, 8);
		this->_firstName += '.';
	}
}

void Contacts::setLastName(std::string lastName) {
	int i = lastName.length();
	if (i < 10)
		this->_lastName = lastName;
	else
	{
		std::cout << "Last name too long! Truncating to 10 characters." << std::endl;
		this->_lastName = lastName.substr(0, 8);
		this->_lastName += '.';
	}
}

void Contacts::setNickname(std::string nickname) {
	int i = nickname.length();
	if (i < 10)
		this->_nickname = nickname;
	else
	{
		std::cout << "Nickname too long! Truncating to 10 characters." << std::endl;
		this->_nickname = nickname.substr(0, 8);
		this->_nickname += '.';
	}
}

void Contacts::setPhoneNumber(std::string phoneNumber) {
	int i = phoneNumber.length();
	if (i < 10)
		this->_phoneNumber = phoneNumber;
	else
	{
		std::cout << "Phone number too long! Truncating to 10 characters." << std::endl;
		this->_phoneNumber = phoneNumber.substr(0, 8);
		this->_phoneNumber += '.';
	}
}

void Contacts::setDarkestSecret(std::string darkestSecret) {
	int i = darkestSecret.length();
	if (i < 10)
		this->_darkestSecret = darkestSecret;
	else
	{
		std::cout << "Darkest secret too long! Truncating to 10 characters." << std::endl;
		this->_darkestSecret = darkestSecret.substr(0, 8);
		this->_darkestSecret += '.';
	}
}

std::string Contacts::getFirstName() {
	return this->_firstName;
}

std::string Contacts::getLastName() {
	return this->_lastName;
}

std::string Contacts::getNickname() {
	return this->_nickname;
}

std::string Contacts::getPhoneNumber() {
	return this->_phoneNumber;
}

std::string Contacts::getDarkestSecret() {
	return this->_darkestSecret;
}
