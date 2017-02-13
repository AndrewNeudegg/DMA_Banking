#ifndef _DEFINE_TRANSACTION
#define _DEFINE_TRANSACTION
#endif // !_DEFINE_ACCOUNT
#pragma once

#include "TransactionTypeEnum.h"
#include "TimeStruct.h"


class Transaction
{
public:
	Transaction();
	~Transaction();

	TransactionTypeEnum GetTransactionType();
	bool SetTransactionType(TransactionTypeEnum & transactionType);

	float GetTransactionValue();
	bool SetTransactionValue(float & transactionValue);

	


private:

};

Transaction::Transaction()
{
}

Transaction::~Transaction()
{
}