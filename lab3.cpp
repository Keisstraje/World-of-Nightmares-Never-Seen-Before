#include <iostream>
using namespace std;
int main() {
	int a;
	setlocale(0, "");
	cout << "������� �����: ";
	cin >> a;
	if (a = < 10 and a > 0) {
		cout << "����� � �������� 0 - 10" << endl;

	}
	else if (a > 10 and a <= 20) {
		cout << "����� � �������� 11 - 20" << endl;

	}
	else if (a <= 30 and a > 20) {
		cout << "����� � �������� 21 - 30" << endl;

	}
	else if (a > 30 and a <= 40) {
		cout << "����� � �������� 31 - 40" << endl;

	}
	else if (a > 40 and a <= 50) {
		cout << "����� � �������� 41 - 50" << endl;

	}
	else if (a > 50 and a <= 60) {
		cout << "����� � �������� 51 - 60" << endl;

	}
	else if (a > 60 and a <= 70) {
		cout << "����� � �������� 61 - 70" << endl;

	}
	else if (a > 70 and a <= 80) {
		cout << "����� � �������� 71 - 80" << endl;

	}
	else if (a > 80 and a <= 90) {
		cout << "����� � �������� 81 - 90" << endl;

	}
	else if (a > 90 and a <= 100) {
		cout << "����� � �������� 91 - 100" << endl;

	}
	else if (a > 100) {
		cout << "������! ����� ������ 100." << endl;

	}
	else if (a < 0) {
		cout << "������! ����� ������ 0." << endl;
	}
	return 0;
}