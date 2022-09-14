//
// Created by Mariana on 9/12/2022.
//

#ifndef EMPLOYEE_MCDONALDWORKER_H
#define EMPLOYEE_MCDONALDWORKER_H


#include "Employee.h"

class McDonaldWorker: public Employee {
public:
    using Employee::Employee;

int getWeekly();

virtual void print();

};


#endif //EMPLOYEE_MCDONALDWORKER_H
