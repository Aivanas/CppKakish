//
// Created by richb on 16.06.2023.
//

#include "Person.h"
#include "PersonException.h"

using namespace std;



Person::Person(string name, unsigned short age, Role role, string login, string password_hash)
{
    if (regex_match(name, pattern)){
        this->name = std::move(name);
    }
    else{
        throw PersonException(name);
    }
    if (age > 0){
        this->age = age;
    }
    else{
        throw PersonException(age);
    }
    this->role = role;
    this->login = login;
    this->password_hash = password_hash;
}










const string &Person::getName() const
{
    return name;
}

void Person::setName(const string &name)
{
    Person::name = name;
}

unsigned short Person::getAge() const
{
    return age;
}

void Person::setAge(unsigned short age)
{
    Person::age = age;
}

const string &Person::getRole() const
{
    return role;
}

void Person::setRole(const string &role)
{
    Person::role = role;
}

const string &Person::getLogin() const
{
    return login;
}

void Person::setLogin(const string &login)
{
    Person::login = login;
}

const string &Person::getPasswordHash() const
{
    return password_hash;
}

void Person::setPasswordHash(const string &passwordHash)
{
    password_hash = passwordHash;
}



