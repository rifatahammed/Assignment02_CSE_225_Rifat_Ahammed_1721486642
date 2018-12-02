#include "Customer.h"
Customer::Customer(std::string& name,int age){
    name=name;
    age=age;
}
Customer::~Customer();
void Customer:: set_number(int operatorNo,std::string& number){
    operatorNo=operatorNo;
    number=number;
}
std::string Customer::get_number(){
return number;
}
	int Customer::get_operator(){
	return operatorNo;
	}

	void Customer::change_operator(int newOperatorNo,std::string& number){
        operatorNo=newOperatorNo;
	}
