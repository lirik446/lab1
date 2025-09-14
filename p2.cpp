#include <iostream>

int main()
{
	int ch, ost;
	std::cout << "Enter a three-digit number\n";
	std::cin >> ch;
	if ((ch <= 999 && ch >= 100) || (ch >= -999 && ch <= -100))
	{
		ost = ch % 10;
		ch = ch / 10 + ost * 100;
		std::cout << ch;
	}
	else
	{
		std::cout << "ENTER A THREE-DIGIT NUMBER!!! ";
	}
	return 0;
}