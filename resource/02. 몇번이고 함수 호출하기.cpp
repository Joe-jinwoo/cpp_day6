#include<iostream>
using namespace std;

void buy() {
	cout << "차를 구입했습니다" << endl;
}

int main() {
	buy();

	cout << "차량을 또 1대 구입합니다" << endl;

	buy();
	return 0;
}