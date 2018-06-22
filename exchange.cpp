#include <iostream>
using namespace std;

void exchange(int &a1, int & b1)   //两个参数的引用
{
	int temp = a1;
	a1 = b1;
	b1 = temp;
}


int main()
{

	int a = 13;
	int b = 15;
	cout << "a:" << a << endl;
	cout << "b:" << b <<endl;

	exchange(a, b);
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	system("pause");
	return 0;
}