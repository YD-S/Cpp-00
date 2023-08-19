
#include "Phonebook.hpp"

Phonebook::Phonebook() {
	this->_index = 0;
	this->aux = 0;
	std::cout << "Phonebook Constructor Called :D" << std::endl;
}

Phonebook::~Phonebook() {
	std::cout << "Phonebook Destructor Called :(" << std::endl;
}

void Phonebook::addContact() {
	if (this->_index < 8) {
		Phonebook::chooseContact(this->_index);
		this->_index++;
	}
	else if (this->aux < 8){
		std::cout << "Phonebook is full! Overwriting the ";
		std::cout << this->aux << " contact." << std::endl;
		Phonebook::chooseContact(this->aux);
		this->aux++;
	}
}

void Phonebook::chooseContact(int index) {
	std::string input;
	std::cout << "First Name: ";
	std::cin >> input;
	this->_contacts[index].setFirstName(input);
	std::cout << "Last Name: ";
	std::cin >> input;
	this->_contacts[index].setLastName(input);
	std::cout << "Nickname: ";
	std::cin >> input;
	this->_contacts[index].setNickname(input);
	std::cout << "Phone Number: ";
	std::cin >> input;
	this->_contacts[index].setPhoneNumber(input);
	std::cout <<  "Darkest Secret: ";
	std::cin >> input;
	this->_contacts[index].setDarkestSecret(input);
}

void Phonebook::printContact(int index){
	std::cout << "Index     |";
	std::cout << "First Name|";
	std::cout << "Last Name |";
	std::cout << "Nickname  |";
	std::cout << "Phone Num |";
	std::cout << "Darkest Sec" << std::endl;
	std::cout << index << "|";
	std::cout << this->_contacts[index].getFirstName() << "|";
	std::cout << this->_contacts[index].getLastName() << "|";
	std::cout << this->_contacts[index].getNickname() << "|";
	std::cout << this->_contacts[index].getPhoneNumber() << "|";
	std::cout << this->_contacts[index].getDarkestSecret() << std::endl;
}


void Phonebook::searchContact() {
	int i;
	int index;
	std::string input;

	if (this->_index == 0) {
		std::cout << "Phonebook is empty!" << std::endl;
		return;
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	for (i = 0; i < this->_index; i++) {
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << this->_contacts[i].getFirstName() << "|";
		std::cout << std::setw(10) << this->_contacts[i].getLastName() << "|";
		std::cout << std::setw(10) << this->_contacts[i].getNickname() << std::endl;
	}
	std::cout << "Enter the index of the contact you want to see: ";
	std::cin >> input;
	std::cout << std::endl;
	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7') {
		index = input[0] - '0';
		if(index <= this->_index)
			this->printContact(index);
		else
			std::cout << "Index doesn't exist" << std::endl;
	}
	else {
		std::cout << "Invalid index!" << std::endl;
	}
}