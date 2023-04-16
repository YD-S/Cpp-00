
#ifndef CPP00_PHONEBOOK_H
#define CPP00_PHONEBOOK_H
#include "Contact.h"
#include <iostream>
#include <array>

class Phonebook{
private:
	Contact *contacts;
public:
	Phonebook();
	~Phonebook();
};


#endif
