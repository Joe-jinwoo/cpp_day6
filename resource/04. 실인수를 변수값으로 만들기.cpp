#include<iostream>
using namespace std;

void buy(int x) {
	cout << x << "���� ¥�� ������ �����մϴ�." << endl;
}
int main() {
	int num;

	cout << "��¥�� ���� �����ұ��? : "; cin >> num;
	buy(num);

	return 0;
}