//
// Created by corebit on 18.06.23.
//

#ifndef FINAL_PROJECT_PERSONEXCEPTION_H
#define FINAL_PROJECT_PERSONEXCEPTION_H
#include "Person.h"




class PersonException
{
public:
    PersonException(){
        std::cout<<"Непредвиденная ошибка при создании пользователя"<<std::endl;
    }
    explicit PersonException(int){
        std::cout<<"Неверный формат числа"<<std::endl;
    }
    explicit PersonException( std::string&){
        std::cout<<"Неверный формат имени. Допускаются только буквы русского и английского алфавитов."<<std::endl;
    }

};


#endif //FINAL_PROJECT_PERSONEXCEPTION_H
