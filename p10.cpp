#include <iostream>

int main()
{
	int day{};
	int month{};
	int year{};
	int totBirthday{};
	int totCurentday{};
	int totAgeDay{};
	int cDay{};
	int cMonth{};
	int cYear{};
	int ageDay{};
	int ageMonth{};
	int ageYear{};

	std::cout << "Enter your date of birth dd.mm.yyyy\n";
	std::cin >> day >> month >> year;
	std::cout << "Enter today's date dd.mm.yyyy\n";
	std::cin >> cDay >> cMonth >> cYear;
	totBirthday = day + month * 30 + year * 365;
	totCurentday = cDay + cMonth * 30 + cYear * 365;
	if (totBirthday > totCurentday)
	{
		std::cout << "incorrect date";
		return 0;
	}
	if (day > 30 || day < 1 || month > 12 || month < 1 || year < 1)
	{
		std::cout << "incorrect date format";
		return 0;
	}
	totAgeDay = totCurentday - totBirthday;
	ageYear = totAgeDay / 365;
	ageMonth = (totAgeDay - ageYear * 365) / 30;
	ageDay = totAgeDay - ageYear * 365 - ageMonth * 30;
	std::cout << "lived " << ageDay << " day " << ageMonth << " months " << ageYear << " years";
	return 0;
}