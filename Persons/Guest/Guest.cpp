//
// Created by richb on 21.06.2023.
//

#include <Windows.h>
#include "Guest.h"


Guest::Guest(std::string&& name) {
        name =  name;
        std::cout<<"Guest "<< this->name<<" in zdanie."<<std::endl;
}
Guest::~Guest(){
    std::cout<<"Guest "<< this->name << " out."<<std::endl;
}


const std::string &Guest::getName() const {
    return this->name;
}

void Guest::setName(const std::string& name) {
this->name = name;
}


