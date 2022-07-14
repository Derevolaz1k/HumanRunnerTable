#pragma once
#include <deque>
#include <fstream>
#include <string>

class GenerateD
{
protected:
	GenerateD();
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
	std::deque<std::string> names_;
	std::deque < std::string> surnames_;
	static std::deque <int> ids_;
};