#include <iostream>
#include<string>
#include "Employee.h"
#include "McDonaldWorker.h"
using namespace std;
int main() {
   /* Employee employe1("Mariana","Avila",100);

   employe1.print();
   cout<<endl;
   Employee employee2(employe1);
   cout<<endl;
  cout<<"copy constuctor: "<<endl;
  employee2.print();
   cout<<endl;
   employee2.setEmplolyeeName("Andrew");
   employee2.print();
   cout<<endl;
   employe1.print();
   cout<<endl;
   cout<< "Adress of employee1 : "<<&employe1;
   cout<<endl;
   cout<<"Adress of employee2 : "<< &employee2;
   cout<<endl;

   Employee emp3;
   cout<<"employee default values:"<<endl;
   emp3.print();
   cout<<endl;
   emp3=employee2;
   cout<<"Printing overloading assignment"<<endl;
   emp3.print();
   cout<<endl;*/




   cout<<"Testing Polymorphism"<<endl;
   McDonaldWorker manuel("Manuel","Avila",400);
manuel.print();
McDonaldWorker Andrew(manuel);
Andrew.print();
cout<<Andrew.getWeekly()<<endl;
cout<<"address of Manuel: "<< &manuel<<endl;
cout<<"address of Andrew: "<< &Andrew<<endl;

Andrew.setEmployeeLastName("Mejia");
Andrew.print();



   //cout<< "After delete employee1: "<< ~Employee();
    return 0;
}
