#include<iostream>
using namespace std;

inline int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	int num1, num2, ans;

	cout << "insert first number : "; cin >> num1;
	cout << "insert num2 : "; cin >> num2;

	cout << "maximum is " << max(num1, num2) << endl;

	return 0;
}