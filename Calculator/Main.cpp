#include "Main.h"

void printMainMenu(void)
{
	cout << "Hello User please aswer what type of calculation you require:" << endl;
	cout << "Addition: 1" << endl;
	cout << "Subtraction: 2" << endl;
	cout << "Multiplication: 3" << endl;
	cout << "Division: 4" << endl;
	cout << "Exit: 5" << endl;
}

void printGoodBye(void)
{
	cout << "Thank you User goodbye" << endl;
}

void main(void)
{
	//Calcs class contains all the functions for calulations and printing results
	Calcs myCalc;

	//loop to ensure the program keeps going until user says so
	bool loop = true;

	//What choice the user has selected
	int choice = 0;// which type of Calculation
	int redo = 0;// Do another Calculation

	while (loop)
	{
		//Print Menu message and ask for user input
		printMainMenu();
		cin >> choice;

		switch (choice)
		{
		case 1:
			myCalc.GetNum();
			myCalc.calculateAdd();
			system("pause");
			system("cls");
			break;
		case 2:
			myCalc.GetNum();
			myCalc.calculateSubtract();
			system("pause");
			system("cls");
			break;
		case 3:
			myCalc.GetNum();
			myCalc.calculateMultiply();
			system("pause");
			system("cls");
			break;
		case 4:
			myCalc.GetNum();
			myCalc.calculateDivide();
			system("pause");
			system("cls");
			break;
		case 5:
			loop = false;
			break;
		default:
			cout << "Error try again" << endl;
			system("pause");
			system("cls");
			break;
		}
		//break loop code developer only comment out once done
		//loop = false;
	}
	system("cls");
	printGoodBye();

}