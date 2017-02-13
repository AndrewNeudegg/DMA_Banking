#ifndef _DEFINE_CLIENT
#define _DEFINE_CLIENT
#endif // !_DEFINE_CLIENT_
#pragma once

#include "stdafx.h"
#include "Account.h"
#include "ClientInformation.h"
#include "ClientSecurity.h"


class Client
{
public:
	Client();
	~Client();

	std::vector<Account> GetClientAccounts();
	bool SetClientAccounts(std::vector<Account> & clientAccounts);
	ClientInformation GetClientInformation();
	bool SetClientInfromation(ClientInformation & clientInformation);
	ClientSecurity GetClientSecurity();
	bool SetClientSecurity(ClientSecurity & clientSecurity);

private:

};





Client::Client()
{
}

Client::~Client()
{
}