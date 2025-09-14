#include <iostream>

int main()
{
	int ch{};
	double a{}, b{}, c{};
	std::cout << "Enter a three-digit number ";
	std::cin >> ch;
	if ((ch <= 999 && ch >= 100) || (ch >= -999 && ch <= -100))
	{
		a = ch / 100;
		b = ch / 10 - a * 10;
		c = ch - a * 100 - b * 10;
		if (ch < 0)
		{
			std::cout << "Sum = " << a + (-b) + (-c) << "\n" << "Mult = " << a * b * c;
		}
		else
		{
			std::cout << "Sum = " << a + b + c << "\n"<< "Mult = " << a * b * c;
		}
		
	}
	else
	{
		
		std::cout << "ENTER A THREE-DIGIT NUMBER!!! ";
	}
	return 0;
}