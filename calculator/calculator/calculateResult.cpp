#include <iostream>


int getUserInput();
char getMathematicalOperation();

int calculateResult()
{
	int value1{ getUserInput() };
	char mSymbol{ getMathematicalOperation() };
	int value2{ getUserInput() };
	int sum{};
	if (mSymbol == '*')
	{
		sum=value1 * value2;
	}

	if (mSymbol == '+')
	{
		sum=value1 + value2;
	}

	if (mSymbol == '-')
	{
		sum = value1 - value2;
	}

	if (mSymbol == '/')
	{
	   sum = value1 / value2;
	}


	std::cout << "Expression: " << value1 << mSymbol << value2 << " = " << sum<<"\n";
	return 0;
}