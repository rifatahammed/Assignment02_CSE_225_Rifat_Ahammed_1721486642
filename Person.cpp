#include "Person.h"
Person::Person(std::string& name,int age){
	name = name;
	age=age;
}
Person::~Person(){
}
 void Person::set_name(const std::string & name){
	name = name;
}
 void Person::set_nameOfFather(std::string& nameOfFather){
	 nameOfFather =  nameOfFather;
}
 void Person::set_nameOfMother(std::string& nameOfMother){
	nameOfMother = nameOfMother;
}
void Person::set_NID(int NID){
    NID=NID;
}

void Person::set_age(int age){
    age=age;
}
void Person::set_address(std::string& address){
	nameOfMother = nameOfMother;
}
void Person::set_zipCode(int zipCode){
    zipCode=zipCode;
}
void Person::set_birthMonth(std::string& birthMonth){
	birthMonth=birthMonth;
}
void Person::set_birthYear(int birthYear){
    birthYear=birthYear;
}
void Person::set_birthDate(int birthDate){
    birthDate=birthDate;
}
void Person::set_bloodGroup(std::string& bloodGroup){
	bloodGroup=bloodGroup;
}

    std::string Person::get_name(){
    return name;
    }
    std::string Person::get_nameOfFather(){
    return nameOfFather
    }
    std::string Person::get_nameOfMother(){
    return nameOfMother;
    }
    int Person::get_NID(){
    return NID;
    }
    int Person::get_age(){
    return age;
    }
    std::string Person::get_address(){
    return address;
    }
    int Person::get_zipCode(){
    return zipCode;
    }
    std::string Person::get_birthMonth(){
    return birthMonth;
    }
    int Person::get_birthYear(){
    return birthYear;
    }
    int Person::get_birthDate(){
    return birthDate;
    }
    std::string Person::get_bloodGroup(){
    return bloodGroup;
    }
