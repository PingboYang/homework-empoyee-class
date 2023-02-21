#include "Employee.h"
#include <iostream>
using namespace std;

Employee :: Employee(string n, int i, string d, string p){
  name=n;
  idNumber=i;
  department=d;
  position=p;
}
Employee :: Employee(string n, int i){
  name=n;
  idNumber=i;
  department="";
  position="";
}
Employee :: Employee(){
  name="";
  idNumber=0;
  department="";
  position="";
}
string Employee::getName(){
  return name;
} 
int Employee::getIdNumber(){
  return idNumber;
}
string Employee::getDepartment(){
  return department;
}
string Employee ::getPosition(){
  return position;
}
void Employee ::setName(string n){
  name=n;
}
void Employee ::setIdNumber(int i){
  if(i>=0){
    idNumber=i;
  }else{
    idNumber=0;
  }
  
}
void Employee ::setDepartment(string d){
  department=d;
}
void Employee ::setPosition(string p){
  position=p;
}



 

  