#include <iostream>
using namespace std;

void main() {


int x;
    int count = 1;
    cout << "Введите число: ";
    cin >> x;
    while (count != 11) {
        cout << x << " x " << count << " = " << x * count << endl;
        count += 1;
    }
}
