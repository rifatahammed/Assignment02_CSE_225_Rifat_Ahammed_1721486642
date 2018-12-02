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


};
 #endif
