#include<iostream>
using namespace std;

void buy(int x, int y) {
	cout << x << "����¥��, "<< y << "���� ¥�� ������ �����մϴ�." << endl;
}
int main() {
	int num1, num2;

	cout << "��¥��? �ΰ� : "; cin >> num1 >> num2;
	buy(num1, num2);

	return 0;
}