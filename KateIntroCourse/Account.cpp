#include "stdafx.h"
#include "Account.h"

using namespace std;

Account::Account() : Balance(0), Limit(100)
{
}

std::vector<std::string> Account::Report() const
{
	vector<string> Report;
	Report.push_back("Balance is " + to_string(Balance));
	Report.push_back("Transactions: ");
	for (auto t:Log)
	{
		Report.push_back(t.Report());
	}
	Report.push_back("------------------");
	return Report;
}

bool Account::Deposit(int Amt)
{
	if (Amt >= 0)
	{
		Balance += Amt;
		Log.push_back(Transaction(Amt, "Deposit"));
		Balance -= 1;
		Log.push_back(Transaction(1, "Service Charge"));
		return true;
	} 
	else
	{
		return false;
	}
}

bool Account::Withdraw(int Amt)
{
	if (Amt >= 0)
	{
		if (Balance + Limit >= Amt)
		{
			Balance -= Amt;
			Log.push_back(Transaction(Amt, "Withdraw"));
			Balance -= 1;
			Log.push_back(Transaction(1, "Service Charge"));
			return true;
		} 
		else
		{
			return false;
		}
	} 
	else
	{
		return false;
	}
}
