#ifndef _DEFINE_CLIENT_SECURITY
#define _DEFINE_CLIENT_SECURITY
#endif // !_DEFINE_CLIENT_SECURITY
#pragma once

class ClientSecurity
{
public:
	ClientSecurity();
	~ClientSecurity();

	bool SetClientAuthentication(std::string & passphrase); // TODO: Set some flag to true so this can't be called repeadedly.
	bool ReSetClientAuthentication(std::string & oldPassphrase, std::string & newPassphrase);
	bool ValidateClientAuthentication(std::string & targetPasspharase);

private:

};

ClientSecurity::ClientSecurity()
{
}

ClientSecurity::~ClientSecurity()
{
}