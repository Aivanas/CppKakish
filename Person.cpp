//
// Created by richb on 16.06.2023.
//

#include "Person.h"

//
// Created by richb on 16.06.2023.
//

#include <iostream>
#include <Windows.h>

using namespace std;



Person::Person (string name, unsigned short age, string role, string login, string password_hash)
{
    if (regex_match(name, pattern)){

    }

    this->name = name;
    this->age = age;
    this->role = role;
    this->login = login;
    this->password_hash = password_hash;
}

