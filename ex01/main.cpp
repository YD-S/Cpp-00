#include "Phonebook.hpp"

int main(){
	Phonebook phonebook;
	int option;

	while(1) {
		std::cout << "Please select an option:" << std::endl;
		std::cout << "1. ADD" << std::endl;
		std::cout << "2. SEARCH" << std::endl;
		std::cout << "3. EXIT" << std::endl;
		std::cout << "Option: ";
		std::cin >> option;
		if (std::cin.fail()) {
			std::cout << "Invalid option! Please try again." << std::endl;
			std::cin.clear();
			std::cin.ignore(256,'\n');
		}
		else if (option == 1)
			phonebook.addContact();
		else if (option == 2)
			phonebook.searchContact();
		else if (option == 3)
			return (0);
		else
			std::cout << "Invalid option! Please try again." << std::endl;
	}
}