//�����ϱ� �Լ�

#include<iostream>
using namespace std;

int square(int x);
int main() {
	int x;
	cin >> x;

	cout << square(x);
	return 0;
}

int square(int x) {
	return x * x;
}
