#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include<string>
class Person{
public:
    std::string name;
    int age;


    void set_name(std::string& name);
    void set_nameOfFather(std::string& nameOfFather);
    void set_nameOfMother(std::string& nameOfMother);
    void set_NID(int NID);
    void set_age(int age);
    void set_address(std::string& address);
    void set_zipCode(int zipCode);
    void set_birthMonth(std::string& birthMonth);
    void set_birthYear(int birthYear);
    void set_birthDate(int birthDate);
    void set_bloodGroup(std::string& bloodGroup);


    std::string get_name();
    std::string get_nameOfFather();
    std::string get_nameOfMother();
    int get_NID();
    int get_age();
    std::string get_address();
    int get_zipCode();
    std::string get_birthMonth();
    int get_birthYear();
    int get_birthDate();
    std::string get_bloodGroup();

private:
    std::string nameOfFather;
    std::string nameOfMother;
    std::string address;
    std::string birthMonth;

    int NID;
    int zipCode;
    int birthYear;
    int birthDate;
    std::string bloodGroup;

};
#endif
