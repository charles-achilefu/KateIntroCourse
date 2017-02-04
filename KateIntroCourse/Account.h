#pragma once
#include <vector>
#include <string>
#include "Transaction.h"

class Account
{

private:

	int Balance;
	int Limit;
	std::vector<Transaction> Log;

public:

	Account();
	std::vector<std::string> Report();
	bool Deposit(int Amt);
	bool Withdraw(int Amt);
	inline int GetBalance() const { return Balance; };
};

