//���ø����� �����Լ� �����
#include<iostream>
using namespace std;

template <class T>
T square(T x) {
	return x * x;
}

int main() {
	double x;
	int a;
	cin >>a>> x;

	cout << square(a) << endl << square(x);
	return 0;
}