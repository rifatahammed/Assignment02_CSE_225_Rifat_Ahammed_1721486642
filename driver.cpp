#include <iostream>
#include"Customer.h"
#include"Person.h"
#include"PhoneNumber.h"
#include"SortedType.h"
#include"UnsortedType.h"

using namespace std;

int main()
{
SortedType<int> dataBase;
cout<<"Creating two customer"<<endl;
  //dataBase.Customer(Rifat,23);
  //dataBase.Customer(Ratul,18);
  Customer c1;
  Customer c2;
  c1.set_number(1,01711111111);
  c2.set_number(1,01711111111);
  
  return 0;
  
}
