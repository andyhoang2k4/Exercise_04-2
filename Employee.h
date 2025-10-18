#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <cstring>
using namespace std;

class Employee {
protected:
    int id;
    char last_name[128];
    char first_name[128];
    int year_of_birth;
    char address[255];
    char phone[10];
    char job[30];
    char department[30];
    double salary;
    double allowance;

public:
    Employee(int id = 0,
             const char last_name[] = "",
             const char first_name[] = "",
             int year_of_birth = 0,
             const char address[] = "",
             const char phone[] = "",
             const char job[] = "",
             const char department[] = "",
             double salary = 0,
             double allowance = 0);

    void setId(int id);
    int getId();

    void setLastName(const char last_name[]);
    char* getLastName();

    void setFirstName(const char first_name[]);
    char* getFirstName();

    virtual void print();
};

#endif
