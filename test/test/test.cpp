#include <iostream>
using namespace std;



//test1  ���������ͷ�ļ�
//void test1()
//{
//	cout << "ʹ��cout��Ҫ���iostreamͷ�ļ�" << endl;
//
//	system("pause");
//
//}

//test2 ���Ը�����ֱ�Ӹ�ֵ������ַ ���ۣ�ֱ�Ӹ����ô��ݵ�ַ������,�������ø���ָ��Ľ����ÿ��ԡ� ԭ��int &b=a ���������Զ���Ϊint *b= *
void test2t()
{
	int a = 10;
	int* p = &a;
	int& b =* p;  //����
	//int& c = *a;  //������
	cout << "b��ֵΪ��" << b << endl;
}



int main()
{
	testcurrent();
	system("pause");
}