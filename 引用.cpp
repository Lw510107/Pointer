//data 2018.6.21
//by liuwei

#include <iostream>
using namespace std;
int main()
{
	//变量起别名   ,  声明的时候一定要初始化
	int a = 12;
	int &c = a;   //生命 变量a的一个引用 c  ，c是变量a的一个别名
	int &d = a;   //声明的时候一定要初始化
	int &e = c;

	cout << &a << " " << &c << endl;   //输出地址 都是一样的

	c = 13;
	d = 56;

	int f = 40;
	c = f;        //仅表示赋值
	
	
	// 最终输出结果 取决于 输出指令上一行的赋值，，如果是d=56；会输出三个56！！ 如果是c = f =40 则会输出三个40。
	cout << a << " " << c <<" " << e << endl;   // 通过c 改变了 a

	system("pause");
   return 0;
}