
#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contacts.hpp"

class Phonebook {
public:
	Phonebook();
	~Phonebook();
	void addContact();
	void searchContact();
	void printContact(int index);
private:
	Contacts _contacts[8];
	int _index;
	int aux;
};

#endif
