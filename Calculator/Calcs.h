#pragma once
#include "Main.h"

using namespace std;

class Calcs
{
public:
	//Used to store numbers for calculations
	float a = 1;
	float b = 2;

	//used to ensure the input in a number
	bool checkNum = true;
	string checkStr = "12";

	//Get numbers for Calculations
	void GetNum();

	//Used to check if input is a digit
	bool is_digits(string& str);

	//Calculation Functions
	void calculateAdd();
	void calculateSubtract();
	void calculateMultiply();
	void calculateDivide();
};

