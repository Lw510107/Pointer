//data 2018.6.21
//by liuwei

#include <iostream>
using namespace std;
int main()
{
	//���������   ,  ������ʱ��һ��Ҫ��ʼ��
	int a = 12;
	int &c = a;   //���� ����a��һ������ c  ��c�Ǳ���a��һ������
	int &d = a;   //������ʱ��һ��Ҫ��ʼ��
	int &e = c;

	cout << &a << " " << &c << endl;   //�����ַ ����һ����

	c = 13;
	d = 56;

	int f = 40;
	c = f;        //����ʾ��ֵ
	
	
	// ���������� ȡ���� ���ָ����һ�еĸ�ֵ���������d=56�����������56���� �����c = f =40 ����������40��
	cout << a << " " << c <<" " << e << endl;   // ͨ��c �ı��� a

	system("pause");
   return 0;
}