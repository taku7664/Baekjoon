#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string a;
	int alp[26] = {};  //알파벳 alp[0] = A ~ alp[25] = Z
	int max1 = 0, max2 = 0, result;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= 97) alp[a[i] - 97]++;  //소문자인 문자는 a의 아스키코드값인 97을 뺌.
		if (a[i] < 97) alp[a[i] - 65]++;   //대문자인 문자는 A의 아스키코드값인 65을 뺌으로써 대소문자 구분을 없앰.
	}
	for (int i = 0; i < 26; i++) {
		if (alp[i] > max1) {
			max1 = alp[i];   //가장 많이 쓴 알파벳 개수를 검출
			max2 = i;        //가장 많이 쓴 알파벳이 무엇인지 검출
		}
	}
	sort(alp, alp + 26, greater<int>());    //많이 쓴 순서대로 정렬
	result = (alp[0] != alp[1]) ? (max2 + 65) : 63;    //많이 쓴 알파벳을 문자상수로 출력, 두개 이상인 경우 ?(아스키코드) 출력
	cout << (char)result;   //char형으로 변환해 문자로 나타냄
}