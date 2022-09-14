//
// Created by Mariana on 9/12/2022.
//

#include "McDonaldWorker.h"


int McDonaldWorker::getWeekly() {
   int mcdonaldmonthly= getEmployeeMonthly();
   int weekly= mcdonaldmonthly/4;
    return weekly;
}

void McDonaldWorker::print(){

    cout<<"McDonald Worker: "<<*employeeName<<","<<*employeelastName<<","<<*employeemonthly<<endl;
}


