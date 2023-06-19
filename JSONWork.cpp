//
// Created by corebit on 18.06.23.
//



#include "JSONWork.h"

void JSONWork::Serialize(vector<Person>& Person_list)
{
    json to_json;
    for (const Person& person:Person_list){
        to_json.push_back(json{{"Name", person.getName()},{"Age", person.getAge()}, {"Role", person.getRole()},
                               {"Login", person.getLogin()}, {"Password", person.getPasswordHash()}});
    }
    std::ofstream file(persons_file);
    if (!file.is_open()) {
        std::cout << "Не удалось открыть файл для записи: " << persons_file << std::endl;
        throw exception();
    }
    file << to_json.dump();
    file.close();
    std::cout<<"Запись успешна!"<<endl;


}

void JSONWork::Deserialize(Person& person)
{
    std::ifstream file(persons_file);
    if (!file.is_open()) {
        std::cout << "Не удалось открыть файл для чтения: " << persons_file << std::endl;
        throw exception();
    }
    json data = json::parse((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    cout<< data[0]["Name"]<<endl;

}

void JSONWork::Deserialize(string& person)
{

}
