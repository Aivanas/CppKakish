//
// Created by richb on 16.06.2023.
//
#pragma once

#ifndef FINAL_PROJECT_PERSON_H
#define FINAL_PROJECT_PERSON_H

#include <regex>
//#include <Windows.h>
#include <iostream>
#include "../PersonException.h"


//static std::regex pattern("^[a-zA-Zа-яА-Я]+$");

class Guest {
private:
    std::string name;

public:
    Guest(std::string&& name);
    ~Guest();
    const std::string& getName() const;
    void setName(const std::string &name);




};



#endif //FINAL_PROJECT_PERSON_H
