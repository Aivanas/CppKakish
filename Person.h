//
// Created by richb on 16.06.2023.
//
#pragma once

#ifndef FINAL_PROJECT_PERSON_H
#define FINAL_PROJECT_PERSON_H

#include <regex>
#include <Windows.h>
#include <iostream>


using namespace std;

static regex pattern("^[a-zA-Zа-яА-Я]+$");

enum Role {
    Guest,
    SysAdmin,
    StockMan,
    Provider,
    Accountant,
    Chef,
    Waiter,
};

class Person {
private:
    string name;
    unsigned short age;
    string role;
    string login;
    string password_hash;

public:
    Person(string name, unsigned short age, Role role, string login, string password_hash);
};



#endif //FINAL_PROJECT_PERSON_H
