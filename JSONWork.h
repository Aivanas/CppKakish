//
// Created by corebit on 18.06.23.
//

#ifndef FINAL_PROJECT_JSONWORK_H
#define FINAL_PROJECT_JSONWORK_H
#include "json.hpp"
#include "Persons/Person.h"
#include <iostream>
#include <fstream>
using json = nlohmann::json;
string persons_file = "Persons.json";

class JSONWork
{
public:
    static void Serialize(std::vector<Person>& Person_list);
    static void Deserialize(Person& person);
    static void Deserialize(std::string& person);

};


#endif //FINAL_PROJECT_JSONWORK_H
