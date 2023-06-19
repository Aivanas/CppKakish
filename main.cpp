#include "Persons/Person.h"
#include <vector>
//#include <Windows.h>


using namespace std;



void LogIn(vector<Person>& list)
{
    string login;
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
}

int main()
{
    vector<Person> Persons_list;
    //SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    //Registration(Persons_list);
    //LogIn(Persons_list);
    Role role = SysAdmin;
    cout<<to_string(role)<<endl;


    return 0;
}

