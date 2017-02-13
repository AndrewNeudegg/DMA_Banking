#ifndef _DEFINE_ADDRESS
#define _DEFINE_ADDRESS
#endif // !_DEFINE_ADDRESS
#pragma once



class Address
{
public:
	Address();
	~Address();

	std::string GetFirstLineOfAddress();
	bool SetFirstLineOfAddress(std::string & firstLineOfAddress);

	std::string GetSecondLineOfAddress();
	bool SetSecondLineOfAddress(std::string & secondLineOfAddress);

	std::string GetCity();
	bool SetCity(std::string & city);

	std::string GetCounty();
	bool SetCounty(std::string & county);

	std::string GetPostcode();
	bool SetPostcode(std::string & postcode);

	std::string GetAddressDetails();
	bool SetAddressDetails(std::string & addressDetails);


private:

};

Address::Address()
{
}

Address::~Address()
{
}