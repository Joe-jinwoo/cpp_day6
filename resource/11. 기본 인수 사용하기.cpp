#include<iostream>
using namespace std;

void buy(int x = 10);

int main() {
	buy();

	return 0;
}

void buy(int x) {
	cout << "car is " << x << "$" << endl;
}