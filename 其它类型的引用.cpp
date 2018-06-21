//data 2018.6.21
//by liuwei

#include <iostream>
using namespace std;
int main()
{
	//12  12.23  'q'

	const int & a = 12;     // const 为常量引用符   可以解决 “初始化”：无法从“int”转换为“int&”  此时 不能再修改a

	cout << a << endl;

	//一维数组的引用
	int arr[12];  // 声明一个一维数组
	int (&p)[12] = arr;  //此时p 变成了一个12个数的一维数组           先引用 （&p）  后声明【12】
	p[2] = 13;
	p[5] = 800;
	cout << p[2] << endl << p[5] << endl;
	
	
	//二维数组的引用
	int arr2[2][3];
	int (&q)[2][3] = arr2;
	
	q[1][1] = 55;
	q[2][2] = 78;
	 
	cout << q[1][1] << " " << q[2][2] << endl;

	//指针的引用

	int b = 12;
	int *point = &b;
	int* (&p1) = point;        //指针的引用 为int*
	*p1 = 334;
	cout << *point << " " << b << endl;

	system("pause");
	return 0;
}