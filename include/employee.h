//
// Created by asus on 18-12-25.
//

#ifndef CLION_EMPLOYEE_H
#define CLION_EMPLOYEE_H

class employee
{
public:
    employee();
    ~employee();
    void pay();
    void promote();
    void display();
protected:
    char *name;
    char *ID;
    int grade;
    float money;
};

class salesman :public employee
{
public:
    salesman();
    void pay();
    void display();
private:
    float precent;
    int sales;
};




#endif //CLION_EMPLOYEE_H
