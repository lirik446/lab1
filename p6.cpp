#include <iostream>

int main()
{
	double pi = 3.1415927, r = 0, s = 0, l = 0;
	std::cout << "enter the length L of the circle\n";
	std::cin >> l;
	if (l <= 0)
	{ 
		std::cout << "the circumference must be a positive value";
	}
	else
	{
	r = l / (2 * pi);
	s = pi * r * r;
	std::cout << "Radius = " << r << "\n" << "Square = " << s;
	}

	return 0;
}