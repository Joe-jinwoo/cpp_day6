#include<iostream>
using namespace std;

int sum(int x, int y) {
	return x + y;
}
int main() {
	int num1, num2, ans;

	cout << "ù��° ������ �Է��ϼ��� : "; cin >> num1;
	cout << "insert second number : "; cin >> num2;

	ans = sum(num1, num2);
	cout << "sum is " << ans << endl;

	return 0;
}