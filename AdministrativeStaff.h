#ifndef ADMINISTRATIVESTAFF_H
#define ADMINISTRATIVESTAFF_H

#include <iostream>
#include <cstring>
using namespace std;

class AdministrativeStaff {
protected:
    int id;
    char last_name[50];
    char first_name[50];
    int year_of_birth;
    char address[100];
    char phone[20];
    char department[50];
    char job[50];
    double salary;
    double allowance;
    int seniority;

public:
    AdministrativeStaff(int id, const char* last_name, const char* first_name,
                        int year_of_birth, const char* address, const char* phone,
                        const char* department, const char* job,
                        double salary, double allowance, int seniority);

    virtual ~AdministrativeStaff(); // destructor ảo để kế thừa an toàn

    virtual void print() const;
};

#endif
