#include <iostream> 
using namespace std;
/* 
план разработки
1. + считать все числа
2. + запомнить минимальное число, к торая не делятся на 4 , но делится на 2
3. запомнить 3 минимальных числа, которые не делятся на 2
4. после считавания всех чисел вывести произведения d2*n0*n1, n0*n1*n2
5. вывести наименьшее из них
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
