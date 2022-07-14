#pragma once
#include <vector>
#include <fstream>
#include <string>

class Generate
{
protected:
	Generate();
	std::string gen_name()const
	{

		return names_[rand() % names_.size()];
	}
	std::string gen_surNames()const
	{
		return surnames_[rand() % surnames_.size()];
	}
	int genId();
	void setId(int num)
	{
		ids_.push_back(num);
	}
private:
	std::vector<std::string> names_;
	std::vector < std::string> surnames_;
	static std::vector <int> ids_;
};