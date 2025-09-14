#include <iostream>

int main()
{
	double a, perim, square;
	std::cin >> a;
	if (a <= 0)
	{
		std::cout << "Enter a positive number";
	}
	else
	{
		perim = a * 4;
		square = a * a;
		std::cout << "Perimeter:" << perim << "\n" << "Square:" << square;
	}

	return 0;
}