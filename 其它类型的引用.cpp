//data 2018.6.21
//by liuwei

#include <iostream>
using namespace std;
int main()
{
	//12  12.23  'q'

	const int & a = 12;     // const Ϊ�������÷�   ���Խ�� ����ʼ�������޷��ӡ�int��ת��Ϊ��int&��  ��ʱ �������޸�a

	cout << a << endl;

	//һά���������
	int arr[12];  // ����һ��һά����
	int (&p)[12] = arr;  //��ʱp �����һ��12������һά����           ������ ��&p��  ��������12��
	p[2] = 13;
	p[5] = 800;
	cout << p[2] << endl << p[5] << endl;
	
	
	//��ά���������
	int arr2[2][3];
	int (&q)[2][3] = arr2;
	
	q[1][1] = 55;
	q[2][2] = 78;
	 
	cout << q[1][1] << " " << q[2][2] << endl;

	//ָ�������

	int b = 12;
	int *point = &b;
	int* (&p1) = point;        //ָ������� Ϊint*
	*p1 = 334;
	cout << *point << " " << b << endl;

	system("pause");
	return 0;
}