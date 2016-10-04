#pragma once
#include <stdio.h>

// represents the Dice of n sides
class Dice { // put all of member variables and methods (function names)
public:
	//creates...
	Dice(int side);
	Dice();
	int rollcount;
	int dicesides;

	// Rolls the dice and returns...
	int Roll();
	int GetRolls();
	int GetSides();
};

