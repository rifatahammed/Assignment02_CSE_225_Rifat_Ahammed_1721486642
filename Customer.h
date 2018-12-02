#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED
#include<string>
#include"Person.h"
class Customer :  Person {
public:
    Customer(std::string& name,int age);
	~Customer();

	void set_number(int operatorNo,std::string& number);
	std::string get_number();
	int get_operatora();

	void change_operator(int operatorNo,std::string& number)

};
#endif
