#include <iostream>

//This program is only for study

int main() 
{
	std::cout << "Hello! Let's input 2 integer numbers!" << std::endl;
	
	std::cout << "The First integer number will be: ";

	int16_t a;
	std::cin >> a;

	std::cout << "\nThe second integer number will be: ";

	int16_t b;
	std::cin >> b;

	std::cout << "\nA + B = " << a + b << std::endl;

	return 0;
}