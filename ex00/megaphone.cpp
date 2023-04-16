
#include <iostream>

int main(int argc, char **argv){
	int i = 1;
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	while(i < argc){
		int j = 0;
		std::string str = argv[i];
		while (str[j] != '\0'){
		str[j] = std::toupper(str[j]);
		j++;
		}
		std::cout << str;
		i++;
	}
	return (0);
}
