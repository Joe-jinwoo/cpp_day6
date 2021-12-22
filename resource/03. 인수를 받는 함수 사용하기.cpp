#include<iostream>
using namespace std;

void buy(int x) {
	cout << x<< "만원 짜리 차량을 구입합니다." << endl;
}
int main() {
	buy(20);
	buy(50);

	return 0;
}