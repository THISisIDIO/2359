#include <iostream>
#include <vector>
using namespace std;
/* 
���� ����������:
1.+ ������� ������ ��� �������� ���� ������� �����
2.+ ������� ��� ������� ����� 
3.+ ������� ���� ����� 
4.+ ������� ������ ����� 
5.+ ������� ������������
6.+ �������� 3 ������������ ������� �� ������� �� 4
7. ������� ����������� 
 */

int main() {
	int n(0);
	cin >> n;
	vector<int> numbers(n);
	for (int i(0); i<n ; i++)
	{
		cin >> numbers[i];
	}
	for (int i(0); i<n ; i++)
	for (int j(i+1); j<n ; j++)
	for (int l(j+1); l<n ; l++)
	{
		int prod=numbers[i]*numbers[j]*numbers[l];
		if (prod%4!=0)
		cout << prod << endl;
	}
	;
	return 0;
}
