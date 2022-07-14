#pragma once
#include <iostream>
#include "Generate.h"
class Runner:public Generate
{
public:
	Runner() :name_{ gen_name() }, surname_{ gen_surNames() }, result_{ (double)(rand()) / RAND_MAX * (20.0 - 7.0) + 7.0 }, id_{ genId() }{}
	std::string get_name()const
	{
		return name_;
	}
	std::string get_surname()const
	{
		return surname_;
	}
	int get_id()const
	{
		return id_;
	}
	double get_result()const
	{
		return result_;
	}
	void runnerInfo()
	{
		std::cout << "Name: " << name_ <<std::endl <<"Surname: " << surname_ << 
			std::endl<<"Id: " << id_ << std::endl << "Result: " << result_ << std::endl;
	}
private:
	std::string name_;
	std::string surname_;
	double result_;
	int id_;
};

