//ouble 제곱구하기 인라인

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