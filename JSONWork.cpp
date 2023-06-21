//
// Created by corebit on 18.06.23.
//



#include "JSONWork.h"

/*void JSONWork::Serialize(vector<Person>& Person_list)
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


}*/

/*void JSONWork::Deserialize(Person& person)
{
    std::ifstream file(persons_file);
    if (!file.is_open()) {
        std::cout << "Не удалось открыть файл для чтения: " << persons_file << std::endl;
        throw exception();
    }
    json data = json::parse((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    cout<< data[0]["Name"]<<endl;

}

void JSONWork::Deserialize(vector<Guest> &GuestList) {

}*/

void JSONWork::Serialize(std::vector<Products> list) {
    json to_json;
    for (const Products& product:list){
        to_json.push_back(json{{"Name", product.getProductName()},{"Count", product.product_count}});
    }
    std::ofstream file(products_file);
    file << to_json.dump();
    file.close();
    std::cout<<"Запись успешна!"<<std::endl;
}

void JSONWork::Deserialize(std::vector<Products> list) {
    unsigned count = 0;
    std::ifstream file(products_file);
    json data = json::parse((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    for (const auto& product:data){
        list[count].setProductName(product[count]["Name"]);
        list[count].product_count = product[count]["Count"];
        count++;
    }

}



/*
 void JSONWork::check_file(std::ofstream file, std::string file_name) {
    if (!file.is_open()) {
        std::cout << "Не удалось открыть файл для чтения: " << file_name << std::endl;
        throw std::exception();
    }
}

 void JSONWork::check_file(std::ifstream file, std::string file_name) {
    if (!file.is_open()) {
        std::cout << "Не удалось открыть файл для чтения: " << file_name << std::endl;
        throw std::exception();
    }
}*/
