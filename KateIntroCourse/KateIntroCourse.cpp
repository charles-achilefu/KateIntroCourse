// KateIntroCourse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string> 

using namespace std;

// Strings and Collections

int main()
{
	string WordOne, WordTwo;
	cin >> WordOne >> WordTwo;
	// or getline(cin, WordOne); getline(cin, WordTwo);
	if (WordOne.length() > WordTwo.length())
	{
		cout << "WordOne.length() > WordTwo.length()" << endl;
	} 
	else if(WordOne.length() < WordTwo.length())
	{
		cout << "WordOne.length() < WordTwo.length()" << endl;
	}
	else
	{
		cout << "WordOne.length() == WordTwo.length()" << endl;
	}

    return 0;
}

