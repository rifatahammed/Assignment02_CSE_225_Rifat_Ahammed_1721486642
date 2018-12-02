#ifndef PHONENUMBER_H_INCLUDED
#define PHONENUMBER_H_INCLUDED
#include<string>
 class PhoneNumber
{
public:
    PhoneNumber(int operatorNo,std::string& number);
    ~PhoneNumber();
    std::string number;
	int operatorNo;
	 /* 1 for GP
	2 for Robi
	3 for BanglaLink
	4 for Teletalk
	5 for KomKothaKoiben
	*/


};
 #endif
