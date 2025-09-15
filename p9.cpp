#include <iostream>

int main()
{
	int h = 0, min = 0, hDepart = 0, minDepart = 0, arrTime = 0, depTime = 0, timeH = 0, timeMin = 0;
	std::cout << "Enter the hour and minute of arrival\n" << "h: ";
	std::cin >> h;
	std::cout << "min: ";
	std::cin >> min;
	std::cout << "Enter the hour and minute of departure\n" << "h: ";
	std::cin >> hDepart;
	std::cout << "min: ";
	std::cin >> minDepart;
	if (h > 23 || h < 0 || min < 0 || min > 59 || hDepart > 23 || hDepart < 0 || minDepart < 0 || minDepart > 59)
	{
		std::cout << "incorrect time format";
		return 0;
	}
	h = h * 60;
	hDepart = hDepart * 60;
	arrTime = h + min;
	depTime = hDepart + minDepart;
	if (arrTime > depTime)
	{
		timeH = (1440 - arrTime + depTime) / 60;
		timeMin = (1440 - arrTime + depTime) - timeH * 60;
		std::cout << "Parking time " << timeH << ":" << timeMin;
	}
	else
	{
		timeH = (depTime - arrTime) / 60;
		timeMin = (depTime - arrTime) - timeH * 60;
		std::cout << "Parking time " << timeH << ":" << timeMin;
	}
	return 0;
}
