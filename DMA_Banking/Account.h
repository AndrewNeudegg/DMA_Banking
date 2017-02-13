#ifndef _DEFINE_ACCOUNT
#define _DEFINE_ACCOUNT
#endif // !_DEFINE_ACCOUNT
#pragma once

#include "stdafx.h"
#include "Transaction.h"

class Account
{
public:
	Account();
	~Account();

	std::vector<Transaction> GetTransactionHistory();
	bool SetTransactionHistory(std::vector<Transaction> transactions);

	float GetBalance();
	bool SetBalance(float balance);

	Client GetOwner();
	bool SetOwner(Client client);

private:

};

Account::Account()
{
}

Account::~Account()
{
}