#include <iostream>

using namespace std;

void bubble_sort(int* target, int range) {
	for (int i = range - 1; i > 0; i--) {
		int temp;
		for (int j = 0; j < i; j++) {
			if (target[j] > target[j + 1]) {
				temp = target[j];
				target[j] = target[j + 1];
				target[j + 1] = temp;
			}
		}
	}
}

int main() {

	int n, sum{ 0 };
	int list_A[50], list_B[50];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> list_A[i];
	}
	bubble_sort(list_A, n);
	for (int i = 0; i < n; i++) {
		cin >> list_B[i];
	}
	bubble_sort(list_B, n);

	for (int i = 0; i < n; i++) {
		sum += list_A[i] * list_B[n - i - 1];
	}
	cout << sum;

}