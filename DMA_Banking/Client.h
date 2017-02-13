#ifndef _DEFINE_CLIENT
#define _DEFINE_CLIENT
#endif // !_DEFINE_CLIENT_
#pragma once

#include "stdafx.h"
#include "Account.h"


class Client
{
public:
	Client();
	~Client();

	std::vector<Account> GetClientAccounts();
	std::vector<Account> SetClientAccounts();



private:

};





Client::Client()
{
}

Client::~Client()
{
}