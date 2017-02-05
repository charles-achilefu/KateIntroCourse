#include "stdafx.h"
#include "Transaction.h"

using namespace std;

Transaction::Transaction(int Amt, std::string Kind) : Amount(Amt), Type(Kind)
{

}

std::string Transaction::Report() const
{
	string Report;
	Report += "   ";
	Report += Type;
	Report += " ";
	Report += to_string(Amount);

	return Report;
}

