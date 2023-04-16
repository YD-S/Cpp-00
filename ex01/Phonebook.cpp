
#include "Phonebook.h"

Phonebook::Phonebook() {
	contacts = new Contact[8];
}

Phonebook::~Phonebook() {
	delete[] contacts;
}
