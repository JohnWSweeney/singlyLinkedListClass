#pragma once
#include <random>

class random
{
private:
	std::mt19937 mt;
public:
	void initMt();
	int getNum(int min, int max);
};