#include "Calcs.h"

void Calcs::calculateAdd()
{
	float ans;
	ans = a + b;
	cout << a << " + " << b << " = " << ans << endl;
}

void Calcs::calculateSubtract()
{
	float ans;
	ans = a - b;
	cout << a << " - " << b << " = " << ans << endl;
}

void Calcs::calculateMultiply()
{
	float ans;
	ans = a * b;
	cout << a << " * " << b << " = " << ans << endl;
}

void Calcs::calculateDivide()
{
	float ans;
	//Check for dividing by 0
	if (b == 0)
	{
		cout << "Error cannot divide by 0" << endl;
	}
	else
	{
		ans = a / b;
		cout << a << " / " << b << " = " << ans << endl;
	}
}

//Used to check if input is a digit
bool Calcs::is_digits(string& str)
{
	for (char ch : str) {
		if (!isdigit(ch)) {
			return false;
		}
	}

	return true;
}


void Calcs::GetNum()
{
	//Input the first number
	checkNum = false;
	while (!checkNum)
	{
		cout << "First Number:" << endl;
		cin >> checkStr;
		if (is_digits(checkStr))
		{
			a = stof(checkStr);
			checkNum = true;
		}
		else
		{
			cout << "Error not a Number!" << endl;
		}
	}

	//Input the second number
	checkNum = false;
	while (!checkNum)
	{
		cout << "Second Number:" << endl;
		cin >> checkStr;
		if (is_digits(checkStr))
		{
			b = stof(checkStr);
			checkNum = true;
		}
		else
		{
			cout << "Error not a Number!" << endl;
		}
	}
}