#include <iostream>
#include <vector>
using namespace std;
/* 
план разработки:
1.+ сделать вектор для хранения всех входный чисел
2.+ вывести все входные числа 
3.+ вывести пары чисел 
4.+ вывести тройки чисел 
5.+ вывести произведения
6.+ оставить 3 произведения которых не делятся на 4
7. вывести минималтное 
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
