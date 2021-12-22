#include<iostream>
using namespace std;

int buy(int x,int y) {
	cout << x << "만원짜리, "<< y << "만원 짜리 차량을 구입합니다." << endl;
	int z = x + y;

	return z;
}
int main() {
	int  num1, num2, sum;

	cout << "얼마짜리 살까? 2개 : "; cin >> num1 >> num2;
	sum = buy(num1, num2);

	cout << "총 " << sum << "만원 사용";

	return 0;
}