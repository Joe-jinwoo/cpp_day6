#include<iostream>
using namespace std;

void buy(int x, int y) {
	cout << x << "만원짜리, "<< y << "만원 짜리 차량을 구입합니다." << endl;
}
int main() {
	int num1, num2;

	cout << "얼마짜리? 두개 : "; cin >> num1 >> num2;
	buy(num1, num2);

	return 0;
}