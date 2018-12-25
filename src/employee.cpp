//
// Created by asus on 18-12-25.
//

#include <iostream>
#include <cstring>
#include "../include/employee.h"
#pragma warning(disable:4996)
using namespace std;

employee::employee()
{
    char namestr[20];
    char IDstr[20];

    cout << "please input name:\n";
    cin >> namestr;
    name = new char[strlen(namestr) + 1];
    strcpy(name,namestr);

    cout << "please input ID:\n";
    cin >> IDstr;
    ID = new char[strlen(IDstr) + 1];
    strcpy(ID, IDstr);

    grade = 1;
    money = 2000;
}

employee::~employee()
{
    delete[] name;
    delete[] ID;
}

void employee::pay()
{
    money += 1000;
}

void employee::promote()
{
    grade++;
}

void employee::display()
{
    cout << "name:" << name;
    cout << "ID" << ID;
    cout << "money" << money;
    cout << "grade" << grade;
}

salesman::salesman()
{
    precent = 0.05;
    sales = 0;
}

void salesman::pay()
{
    cout << "please input sales:\n";
    cin  >> sales;
    money += sales * precent;
}

void salesman::display()
{
    cout << "name:"  << name  << "\t";
    cout << "ID:"    << ID    << "\t";
    cout << "grade:" << grade << "\t";
    cout << "money:" << money << endl;
}


















