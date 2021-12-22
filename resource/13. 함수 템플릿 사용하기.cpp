#include<iostream>
using namespace std;

template <class T>
T maxt(T x, T y);

int main() {
	int a, b;
	double x, y;
	cin >> a >> b;
	cin >> x >> y;

	cout << "max int is " << maxt(a, b) << endl;
	cout << "max double is " << maxt(x, y) << endl;

	return 0;
}
template <class T>
T maxt(T x, T y) {
	if (x > y)
		return x;
	else
		return y;
}