#include <iostream>

int main()
{
	int h = 0, min = 0, h1 = 0, min1 = 0, time = 0, timeh = 0, timemin = 0;
	//double time = 0;
	std::cout << "Enter the hour and minute of arrival\n" << "h: ";
	std::cin >> h;
	std::cout << "min: ";
	std::cin >> min;
	std::cout << "Enter the hour and minute of departure\n" << "h: ";
	std::cin >> h1;
	std::cout << "min: ";
	std::cin >> min1;
	h = h * 60;
	h1 = h1 * 60;
	time = ((h1 + min1) - (h + min));
	if (time > 59)
	{
		timeh = time / 60;
		timemin = time - timeh * 60;
		std::cout << "Parking time " << timeh << ":" << timemin;
	}
	else
	{
		std::cout << "Parking time 00:" << time;
	}
	return 0;
}