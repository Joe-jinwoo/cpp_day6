#include<iostream>
using namespace std;

int buy(int x,int y) {
	cout << x << "����¥��, "<< y << "���� ¥�� ������ �����մϴ�." << endl;
	int z = x + y;

	return z;
}
int main() {
	int  num1, num2, sum;

	cout << "��¥�� ���? 2�� : "; cin >> num1 >> num2;
	sum = buy(num1, num2);

	cout << "�� " << sum << "���� ���";

	return 0;
}