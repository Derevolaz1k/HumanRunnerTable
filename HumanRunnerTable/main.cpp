#include <iostream>
#include<vector>
#include <deque>
#include <algorithm>
#include "Runner.h"
#include "RunnerD.h"
int functorIds(Runner &obj, Runner& obj2)
{
	return obj.get_id() < obj2.get_id();
}

int functorResult(Runner& obj, Runner& obj2)
{
	return obj.get_result() < obj2.get_result();
}



int main()
{
	srand(time(NULL));
/////////////////////////////////VECTOR
	std::vector<Runner> Runners(10);
	sort(Runners.begin(), Runners.end(),[](Runner& obj, Runner& obj2) 
		{
		return obj.get_id() < obj2.get_id();
		});
	for (auto &it : Runners)
	{
		it.runnerInfo();
		std::cout << std::endl;
	}


////////////////////////////////DEQUE

	std::cout << "\n\nDEQUE\n\n";

	std::deque<Runner> Runners2(10);
	sort(Runners2.begin(), Runners2.end(), [](Runner& obj, Runner& obj2)
		{
			return obj.get_id() < obj2.get_id();
		});
	for (auto& it : Runners2)
	{
		it.runnerInfo();
		std::cout << std::endl;
	}

	std::cout<<std::endl<<"TIME CLOCK: "<<clock();
	return 0;
}