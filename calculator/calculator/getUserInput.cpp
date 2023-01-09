#include <iostream>

int getUserInput()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
	return input;
}


char getMathematicalOperation()
{
	std::cout << "Enter Mathematical Operation (+ / - *)\n";
	char symbol{};
	std::cin >> symbol;

	return symbol;
}