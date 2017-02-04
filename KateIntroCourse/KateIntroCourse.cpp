// KateIntroCourse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Account.h"

using namespace std;

// Writing Classes
/**   
	#Account
		- Keeps track of a balance
		- Holds a vector of Transaction objects
		- Deposit and Withdraw member functions
		- Report function - collections of strings that calling code can print

	#Transaction
		- Should have a date, but we will ignore that for simplicity
		- Holds an amount, and a transaction type (string for now)
		- Report function - string describing amount and type

	#Deposit will
		- Create a Transaction
		- Add it to the vector
		- Update the balance
	#Withdraw is the same
		- Except you can't take out more than you have

*/

int main()
{

	Account A1;
	A1.Deposit(90);
	cout << "After depositing 90$ Balance = " << A1.GetBalance() << endl;
	for (auto s : A1.Report())
	{
		cout << s << endl;
	}

	A1.Withdraw(50);
	if (A1.Withdraw(100))
	{
		cout << "second withdraw succeeds" << endl;
	}

	cout << "After withdrawing 50$ and then 100$" << endl;
	for (auto s:A1.Report())
	{
		cout << s << endl;
	}
	
    return 0;
}

