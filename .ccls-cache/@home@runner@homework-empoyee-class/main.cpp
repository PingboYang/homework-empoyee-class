#include "Employee.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  Employee e1("Usan Meyers", 47899, "Accounting", "Vice President");
  Employee e2("Mark Jones", 39119);
  Employee e3;
  e2.setDepartment("IT");
  e2.setPosition("Programmer");
  e3.setName("Joy Rogers");
  e3.setIdNumber(81774);
  e3.setDepartment("Manufacturing");
  e3.setPosition("Engineer");
  cout<<"\nName"<<setw(20)<<"ID Number"<<setw(20)<<"Department"<<setw(20)<<"Position";
  cout<<"\n---------------------------------------------------------------------";
  cout<<"\n"<<e1.getName()<<setw(10)<<e1.getIdNumber()<<setw(20)<<e1.getDepartment()<<setw(30)<<e1.getPosition();
  cout<<endl;
  cout<<"\n"<<e2.getName()<<setw(11)<<e2.getIdNumber()<<setw(15)<<e2.getDepartment()<<setw(32)<<e2.getPosition();
  cout<<endl;
  cout<<"\n"<<e3.getName()<<setw(11)<<e3.getIdNumber()<<setw(25)<<e3.getDepartment()<<setw(20)<<e3.getPosition();
}