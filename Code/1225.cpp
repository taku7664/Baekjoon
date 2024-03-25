#include <iostream>
#include <cstring>
using namespace std;

char a[10001]{ 0, }, b[10001]{ 0, };

int main() {

	long long t, res = 0;
	
	cin >> a >> b;
	int a_len = strlen(a), b_len = strlen(b);

	for (int i = 0; i < a_len; i++) {
		for (int j = 0; j < b_len; j++) {
			res += (a[i] - '0') * (b[j] - '0');
		}
	}
	cout << res;
}