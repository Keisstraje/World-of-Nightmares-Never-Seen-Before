#include <iostream>
using namespace std;

void main() {

setlocale(0, "");
    int count = 0;
    int sum = 0;
    int x = 1;
    while (x != 0) {
        cout << "Введите число: ";
        cin >> x;
        sum += x;
        if (x != 0) {
            count += 1;
        }
    }
    cout << "Количество чисел: " << count << endl << "Сумма: " << sum;
}
