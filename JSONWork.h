//
// Created by corebit on 18.06.23.
//

#ifndef FINAL_PROJECT_JSONWORK_H
#define FINAL_PROJECT_JSONWORK_H
#include "json.hpp"
#include <iostream>
#include <fstream>
#include "Persons/Guest/Guest.h"
#include "Persons/Person.h"
#include "Products/Products.h"



using json = nlohmann::json;
std::string products_file = "Products.json";


class JSONWork
{
public:
    //void Serialize(std::vector<Person>& Person_list);
    //void Deserialize(Person& persons);


    void Serialize(std::vector<Products> list);
    void Deserialize(std::vector<Products> list);

};


#endif //FINAL_PROJECT_JSONWORK_H
