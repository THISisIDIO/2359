#include <iostream> 
using namespace std;
/* 
���� ����������
1. + ������� ��� �����
2. + ��������� ����������� �����, � ����� �� ������� �� 4 , �� ������� �� 2
3. ��������� 3 ����������� �����, ������� �� ������� �� 2
4. ����� ���������� ���� ����� ������� ������������ d2*n0*n1, n0*n1*n2
5. ������� ���������� �� ���
 */

int main() {
	int n(0), cur_num(0);
	int d2=1001;
	cin >> n;
	for (int i(0); i<n; i++ )
	{
		cin >> cur_num;
		if (cur_num%2==0 and cur_num%4!=0 and d2>cur_num)
		d2=cur_num;
	}
	cout << d2;
	return 0;
}
