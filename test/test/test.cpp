#include <iostream>
using namespace std;
#include<string>


//test1  ���������ͷ�ļ�
//void test1()
//{
//	cout << "ʹ��cout��Ҫ���iostreamͷ�ļ�" << endl;
//
//	system("pause");
//
//}

//test2 ���Ը�����ֱ�Ӹ�ֵ������ַ ���ۣ�ֱ�Ӹ����ô��ݵ�ַ������,�������ø���ָ��Ľ����ÿ��ԡ� ԭ��int &b=a ���������Զ���Ϊint *b= *
//void test2()
//{
//	int a = 10;
//	int* p = &a;
//	int& b =* p;  //����
//	//int& c = *a;  //������
//	cout << "b��ֵΪ��" << b << endl;
//}


//test3 ����δ��ʼ����ָ���С��ָ�� ���ۣ���δ��ʼ����ָ�벻��ָ��գ�������������ַ��Ҳ������ν��Ұָ�롣 ��ָ���С��32λΪ32bit/8bit=4�ֽڣ���64λΪ64bit/8bit=8�ֽڡ�
//void 3()
//{
//	int a = 10;
//	int* p=0;
//	cout << "a�ĵ�ַΪ��" <<(int) &a<< endl;
//	cout << "ָ��pָ��ĵ�ַΪ��" << &p << endl;
//	cout << "����ָ��p�Ĵ�СΪ" << sizeof(p) << endl;
//}

//test4 const�ؼ��ֵ�Ӧ�á� ���ۣ��ں�����ʽ������Ӧ��const�ؼ��ֿ��Ա����������ݲ����޸ġ�
//void testcurrent(const int *a)
//{
//	// const int a = 10;
//	*a = 20;
//	cout << "b��ֵΪ" <<a<< endl;
//}

//test5 ����������Ĭ��ֵ�ͺ������ص�Ӧ�á� ���ۣ���Ĭ�ϲ���Ҫ�ڲ����б�ĩβ����Ȼ���ܻ����������ش��󡣢ڷ���ֵ���Ͳ�����Ϊ���������ж�������
//void 5(int a)
//{
//	a = 20;
//	cout << "a_values:" << a << endl;
//}
//
//void 5(int a,int b=10,int c)
//{
//	a = 20;
//	b += 5;
//	cout << "a_values:" << a << endl;
//	cout << "b_values:" << b << endl;
//}


//test6 ���Գ����ĵ�ַ�ʹ�С�� ���ۣ����ַ��������Ĵ�С�̶�Ϊ28�ֽڣ�32λϵͳ�£���ԭ��sizeof���������ֻ��string������ݽṹ��ռ�ÿռ䣬�������ַ�������
//  ���ַ���������const char * ���ַ��ͳ���ָ�룩  ��������������Ԫ�ص�ַ��ָ�뷨��������ע�����ȼ���
//void 6()
//{
//	string name = "nihaoa";
//	cout << "string name:" << name << endl;
//	cout << "�ַ��������ĵ�ַΪ" << &name << endl << "�ַ����Ĵ�СΪ" << sizeof(string) << endl;
//}

//void 6()
//{
//	char arr[] = {'n','h','\0','a'};
//	char* p = arr;
//		//cout << "string[]arr:" << arr<< endl;
//		cout << "�ַ�����ĵ�ַΪ" << arr << endl << "�ַ����Ĵ�СΪ" << sizeof(arr) << endl;
//		cout << "ָ�뷨�����ַ����飺" << *(p+1) << endl;
//		cout << "�ַ������һ���ַ�Ϊ" << arr[0] << endl;
//}

//test 7 ���Խṹ�����ܷ��к������Լ������ķ��ļ���д�� ���ۣ��ٽṹ���ڿ����к������ڽṹ��Ĭ�Ϸ���Ȩ��Ϊpublic�������Ϊprivate�ṹ���ⲻ�ܷ��ʡ���

struct Book
{
//private:
	string bookname;
	string author;
	int		time;

//private:
public:
	void showbook()
	{
		cout << "����Ϊ��" << bookname << endl;
		cout << "�����ǣ�" << author << endl;
		cout << "��������" << time <<endl;
	}
}jinpingmei = { "jinpingmei","lqw",20210907 };

void testcurrent()
{
	jinpingmei.showbook();
	Book rouputuan = { "rouputuan",jinpingmei.author,20210908};
	rouputuan.showbook();
}


int main()
{
	testcurrent();
	system("pause");
	return 0;
}
