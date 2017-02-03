// KateIntroCourse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
 
using namespace std;

int main()
{
	int GuessNumber, Answer = 7;
	bool bShouldContinueGame = true;
	while (bShouldContinueGame)
	{
		cout << "Enter a number : ";
		cin >> GuessNumber;
		if (GuessNumber == Answer)
		{
			cout << endl << "Got it!" << endl;
			bShouldContinueGame = false;
		} 
		else if(GuessNumber < Answer)
		{
			cout << endl << "GuessNumber < Answer" << endl;
		}
		else
		{
			cout << endl << "GuessNumber > Answer" << endl;
		}
	}

    return 0;
}

