#include<iostream>
using namespace std;

int sum(int x, int y) {
	return x + y;
}
int main() {
	int num1, num2, ans;

	cout << "첫번째 정수를 입력하세요 : "; cin >> num1;
	cout << "insert second number : "; cin >> num2;

	ans = sum(num1, num2);
	cout << "sum is " << ans << endl;

	return 0;
}