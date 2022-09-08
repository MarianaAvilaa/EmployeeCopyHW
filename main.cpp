#include <iostream>
#include<string>
#include "Employee.h"
using namespace std;
int main() {
    Employee employe1("Mariana","Avila",100);
    cout<<endl;

   employe1.print();
   Employee employee2(employe1);
   cout<<endl;
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
   //cout<< "After delete employee1: "<< ~Employee();
    return 0;
}
