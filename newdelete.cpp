#include <iostream>
using namespace std;



int main()
{
	// new 申请空间
	int *p = (int*)malloc( sizeof(int));
	int *p1 = new int(121);   //new + type              //单个数组  可以用一个值初始化   如果是数组的话 该怎么设置初始化？？？
	char *c = new char;                           // 如果同时申请整型int和符号性char  全部写入后，，该怎么都释放掉    连续用 《《 即可多输出
	//*p1 = 12;  // 写
	// *c =  "SB";     // 怎么写入   字符型 char

	cout << *p1 << endl;  //读
	//cout << *c << endl;


	delete p1;  //delete+指针:    空间释放   删除   指针p1放在此处即可释放
	//delete c;


	int *q = new int[5];  //申请五个元素的数组         // 单个数组  可以用一个值初始化   如果是数组的话 该怎么设置初始化？？？   
	memset(q, 0, 5*4);     //连续的空间赋一个相同的值     q  为空间的起始地址   0  表示所赋给的值     5*4  表示安《字节数》装的空间大小，一个int 4个字节
	
	q[0] = 12;
	q[4] = 22;
	cout << q[0] << " " << q[1] << " " << q[2] << " " << q[3] << " " << q[4] << endl;   //加空格  要用 双引号 “”
	delete[] q;    //  释放数组时  加方括号

	system("pause");
	return 0;
}