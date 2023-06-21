//
// Created by richb on 16.06.2023.
//
#pragma once

#ifndef FINAL_PROJECT_PERSON_H
#define FINAL_PROJECT_PERSON_H

#include <regex>
//#include <Windows.h>
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
    void DeleteThis();
     const string &getName() const;

    void setName(const string &name);

    unsigned short getAge() const;

    void setAge(unsigned short age);

    const string &getRole() const;

    void setRole(const string &role);

    const string &getLogin() const;

    void setLogin(const string &login);

    const string &getPasswordHash() const;

    void setPasswordHash(const string &passwordHash);

public:
    Person(string name, unsigned short age, Role role, string login, string password_hash);
};



#endif //FINAL_PROJECT_PERSON_H
