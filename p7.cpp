#include <iostream>

int main()
{
	double pi = 3.1415927, s = 0, l = 0, d = 0;
	std::cout << "enter the area of a circle\n";
	std::cin >> s;
	if (s <= 0)
	{
		std::cout << "the area of a circle must be a positive value";
	}
	else
	{
		d = sqrt(s / pi) * 2;
		l = d * pi;
		std::cout << "D = " << d << "\n" << "L = " << l;
	}

	return 0;
}