#include <iostream>

int main()
{
	int x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0;
	double per = 0, sqr = 0, a = 0, b = 0, c = 0, polper = 0;

	std::cout << "Enter x1, y1, x2, y2, x3, y3 (the coordinates of the vertices of the TRIANGLE)\n";
	std::cin >> x1 >> y2 >> x2 >> y2 >> x3 >> y3;
	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	polper = (a + b + c) / 2;
	per = a + b + c;
	sqr = sqrt(polper * (polper - a) * (polper - b) * (polper - c));
	std::cout << "Perimeter = " << per << "\n" << "Square = " << sqr;
	return 0;
}