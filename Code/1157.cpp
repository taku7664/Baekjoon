#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string a;
	int alp[26] = {};  //���ĺ� alp[0] = A ~ alp[25] = Z
	int max1 = 0, max2 = 0, result;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= 97) alp[a[i] - 97]++;  //�ҹ����� ���ڴ� a�� �ƽ�Ű�ڵ尪�� 97�� ��.
		if (a[i] < 97) alp[a[i] - 65]++;   //�빮���� ���ڴ� A�� �ƽ�Ű�ڵ尪�� 65�� �����ν� ��ҹ��� ������ ����.
	}
	for (int i = 0; i < 26; i++) {
		if (alp[i] > max1) {
			max1 = alp[i];   //���� ���� �� ���ĺ� ������ ����
			max2 = i;        //���� ���� �� ���ĺ��� �������� ����
		}
	}
	sort(alp, alp + 26, greater<int>());    //���� �� ������� ����
	result = (alp[0] != alp[1]) ? (max2 + 65) : 63;    //���� �� ���ĺ��� ���ڻ���� ���, �ΰ� �̻��� ��� ?(�ƽ�Ű�ڵ�) ���
	cout << (char)result;   //char������ ��ȯ�� ���ڷ� ��Ÿ��
}