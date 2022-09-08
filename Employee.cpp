//
// Created by Mariana on 9/6/2022.
//
#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(string name, string lastname, int monthly) {

    setEmplolyeeName(name);
    setEmployeeLastName(lastname);
    setEmployeeMonthly(monthly);

}
Employee::~Employee(){
 delete employeeName;
 delete employeelastName;
 delete employeemonthly;
 cout<<"free memory"<<endl;
}
void Employee::setEmplolyeeName(string name) {
    employeeName=new  string;
    *employeeName=name;

}
string Employee::getEmployeeName() {
    return *employeeName;
}
void Employee::setEmployeeLastName(string lastname) {
    employeelastName= new string;
    *employeelastName=lastname;
}
string Employee::getEmployeeLastName() {
    return *employeelastName;
}
void  Employee::setEmployeeMonthly(int monthly) {
    employeemonthly= new int;
   *employeemonthly=monthly;
}
int Employee::getEmployeeMonthly(){
    return *employeemonthly;
}
Employee::Employee(const Employee& pass){
    employeeName= new string(*pass.employeeName); //hold the value name
    employeelastName= new string(*pass.employeelastName);
    employeemonthly= new int(*pass.employeemonthly);

    /**employeeName= *pass.employeeName;
    *employeelastName= *pass.employeelastName;
    *employeemonthly=*pass.employeemonthly;*/
}
void Employee::print(){
    cout<<*employeeName<<","<<*employeelastName<<","<<*employeemonthly;
}