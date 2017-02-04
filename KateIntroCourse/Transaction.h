#pragma once
#include <string>

class Transaction
{

private:

	int Amount;
	std::string Type; // a better way exists

public:

	Transaction(int Amt, std::string Kind);
	std::string Report();
	
};

