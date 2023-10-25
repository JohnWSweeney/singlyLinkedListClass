#include "random.h"

void random::initMt()
{
	std::random_device rd;
	mt.seed(rd());
}

int random::getNum(int min, int max)
{
	std::uniform_int_distribution<> dist(min, max);
	return dist(mt);
}