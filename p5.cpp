#include <iostream>

int main()
{
	int ch;
	double a, b, c;
	std::cout << "Enter a three-digit number\n";
	std::cin >> ch;
	if ((ch <= 999 && ch >= 100) || (ch >= -999 && ch <= -100))
	{
		a = ch / 100;
		b = ch / 10 - a * 10;
		c = ch - a * 100 - b * 10;
		std::cout << a + b * 10 + c * 100;
	}
	else
	{
		std::cout << "ENTER A THREE-DIGIT NUMBER!!! ";
	}
	return 0;
}