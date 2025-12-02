#include <iostream>
using namespace std;

void main() {
   setlocale(0, "");
    int x = 1;
    int b = 0;
    while (x != 0) {
        cout << "Введите число: ";
        cin >> x;
        b += x;
    }
    cout << b;
}
