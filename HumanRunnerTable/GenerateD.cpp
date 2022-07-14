#include "GenerateD.h"


std::deque<int> GenerateD::ids_;

GenerateD::GenerateD()
{
	std::ifstream names("names.txt");
	//names.open;
	std::string str;
	while (std::getline(names, str))
	{
		names_.emplace_back(str);
	}
	names.close();
	std::ifstream surnames;
	surnames.open("surnames.txt");
	while (std::getline(surnames, str))
	{
		surnames_.emplace_back(str);
	}
	surnames.close();
}
int GenerateD::genId()
{
	int num;
	while (true)
	{
		num = rand() % 90000 + 10000;
		if (std::find(ids_.begin(), ids_.end(), num) != ids_.end())
		{
			continue;
		}
		break;
	}
	setId(num);
	return num;
}