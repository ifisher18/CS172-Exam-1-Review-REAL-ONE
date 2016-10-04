#include "Dice.h"
#include <ctime>
#include <cstdlib>
using namespace std;

Dice::Dice(int side) {
	dicesides = side;
}

int Dice::Roll() {
	int randroll;
	randroll = rand() % 6 + 1;
	rollcount++;
	return randroll;
}

int Dice::GetRolls() {
	return rollcount;
}

int Dice::GetSides() {
	return dicesides;
}
