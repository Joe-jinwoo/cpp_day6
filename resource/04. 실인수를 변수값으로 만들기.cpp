#include<iostream>
using namespace std;

void buy(int x) {
	cout << x << "만원 짜리 차량을 구입합니다." << endl;
}
int main() {
	int num;

	cout << "얼마짜리 차를 구입할까요? : "; cin >> num;
	buy(num);

	return 0;
}