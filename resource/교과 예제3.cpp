//ouble �������ϱ� �ζ���

#include<iostream>
using namespace std;

inline double square(double x) {
	return x * x;
}

int main() {
	double x;
	cin >> x;

	cout << square(x);
	return 0;
}