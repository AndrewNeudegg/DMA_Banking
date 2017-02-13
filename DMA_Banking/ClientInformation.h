#ifndef _DEFINE_CLIENT
#define _DEFINE_CLIENT
#endif // !_DEFINE_CLIENT_
#pragma once

#include "Address.h"


class ClientInformation
{
public:
	ClientInformation();
	~ClientInformation();

	std::string GetClientName();
	bool SetClientName(std::string &clientName);

	Address GetClientAddress();
	bool SetClientAddress(Address & address);

	int GetClientBirthYear();
	bool SetClientBirthYear(int & birthYear);

	int GetClientBirthMonth();
	bool SetClientBirthMonth(int & birthMonth);

	int GetClientBirthDay();
	bool SetClientBirthDay(int & birthDay);

	std::string GetClientInformationDetials();
	bool SetClientInformationDetials(std::string clientDetails);

private:

};

ClientInformation::ClientInformation()
{
}

ClientInformation::~ClientInformation()
{
}