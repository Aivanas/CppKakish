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
        std::cout<<"Непредвиденная ошибка при создании пользователя"<<endl;
    }
    explicit PersonException(int){
        std::cout<<"Неверный формат числа"<<endl;
    }
    explicit PersonException(string){
        std::cout<<"Неверный формат имени. Допускаются только буквы русского и английского алфавитов."<<endl;
    }

};


#endif //FINAL_PROJECT_PERSONEXCEPTION_H
