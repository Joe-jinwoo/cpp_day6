#include<iostream>
using namespace std;

int max(int x, int y);
double max(double x, double y);

int main() {
	int a, b;
	double x, y;
	cin >> a >> b;
	cin >> x >> y;

	cout << "max int is " << max(a, b) << endl;
	cout << "max double is " << max(x, y) << endl;

	return 0;
}
int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
double max(double x, double y) {
	if (x > y)
		return x;
	else
		return y;
}