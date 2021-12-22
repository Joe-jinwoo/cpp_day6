//double형 제곱하기
#include<iostream>
using namespace std;

double square(double x) {
	return x * x;
}

int main() {
	double x;
	cin >> x;

	cout << square(x);
	return 0;
}