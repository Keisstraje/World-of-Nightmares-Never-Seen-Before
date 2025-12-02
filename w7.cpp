#include <iostream>
using namespace std;

void main() {
string password = "12345";
    cout << "Введите пароль: ";
    string x;
    cin >> x;
    while (x != password) {
        cout << "Неверный пароль!" << endl;
        cout << "Введите пароль: ";
        cin >> x;
    }
    cout << "Добро пожаловать!";

}
