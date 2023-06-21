//#include "Persons/Person.h"
#include "Persons/Guest/Guest.h"
#include "Products/Products.h"
#include "Products/ProductsList.h"
#include "JSONWork.h"
#include <vector>
#include <Windows.h>


using namespace std;




int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");

    Products product = *new Products("kakish", 5);
    ProductsList::productsList.push_back(product);
    JSONWork JSOW;
    JSOW.Serialize(ProductsList::productsList);
    cout<<"SDSDSDDSDDS"<<endl;
    JSOW.Deserialize(ProductsList::productsList);
    cout<<"sdsd"<<endl;



    return 0;
}

/*void LogIn(vector<Person>& list)
{
    string login;В
    string password;
    hash<string> hashier;
    cout << "Введите логин: " ;
    cin >> login;
    cout << "Введите пароль: " ;
    cin >> password;
    password = std::to_string(hashier(password));

    for (const Person& person:list){
        if (person.getLogin() == login){
            if(person.getPasswordHash()==password){
                cout<<person.getName()<<endl;
                cout<<person.getRole()<<endl;
            }
            else{
                cout<<"WRONG PASSWORD!"<<endl;
            }
        }
    }

}

void Registration(vector<Person>& list){
    string name;
    unsigned short age;
    string login;
    string password;
    Role role = Guest;
    hash<string> hashier;
    cout<<"Введите имя: ";
    cin >> name;
    cout<<"Введите возраст: ";
    cin >> age;
    cout << "Введите логин: ";
    cin >> login;
    cout<<"Введите пароль: ";
    cin>>password;
    password = std::to_string(hashier(password));
    Person person = *new Person(name, age, role, login, password);
    list.push_back(person);
}*/
