//
// Created by Mariana on 9/6/2022.
//
#include <iostream>
#include<string>
using namespace std;
#ifndef EMPLOYEE_EMPLOYEE_H
#define EMPLOYEE_EMPLOYEE_H


class Employee {
public:
    Employee(string name,string lastname,int monthly); //constructor
   Employee(); // default constructor
    Employee(const Employee& pass); //copy constructor
    Employee & operator=(const Employee &other);
 ~Employee(); // destructor

    void setEmplolyeeName(string name);
    string getEmployeeName();

    void setEmployeeLastName(string lastname);
    string getEmployeeLastName();

    void setEmployeeMonthly(int monthly);
    int getEmployeeMonthly();

  virtual void print();

protected:
    string *employeeName;
    string *employeelastName;
    int *employeemonthly;

};


#endif //EMPLOYEE_EMPLOYEE_H
