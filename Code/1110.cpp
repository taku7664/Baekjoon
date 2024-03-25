#include <iostream>

using namespace std;

int main() {
	int a, b, c = 0;
	cin >> a;
	b = a;
	while (1) {
		b = b >= 10 ? ((b % 10) + (b / 10)) % 10 + (b % 10) * 10 : b + (b % 10) * 10;
		c++;
		if (b == a) break;
	}
	cout << c;
}