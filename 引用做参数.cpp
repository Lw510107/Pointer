#include <iostream>
using namespace std;
//引用做参数
void fun(int &a)
{
	a = 13;
	//cout << a << endl;
}

void fun1(int a)
{
	cout << a << endl;
}

int main()
{

	int b = 12;
	fun(b);
	cout << b << endl;
	fun1(b);
	system("pause");
	return 0;
}