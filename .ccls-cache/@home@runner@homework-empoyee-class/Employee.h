#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee{
private: string name;
         int idNumber;
         string departement;
         string position;

public: Employee(string, int, string, string);
        Employee(string, int);
        Employee();

        string getName();
        int getIdNumber();
        string getDepartement();
        string getPosition;
        void setName(string);
        void setIdNumber(int);
        void setDepartment(string);
        void setPosition();
};








#endif