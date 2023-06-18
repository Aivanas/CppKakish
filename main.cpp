#include "Person.h"
#include <Windows.h>

using namespace std;

void LogIn()
{

    string login;
    string password;
    hash<string> hashier;

    cout << "Введите логин: " ;
    cin >> login;
    cout << "Введите пароль: " ;
    cin >> password;
    cout << hashier(password) << endl;


}

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    LogIn();

    return 0;
}

