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

//test 7 ���Խṹ�����ܷ��к������Լ������ķ��ļ���д�� ���ۣ��ٽṹ���ڿ����к������ڽṹ��Ĭ�Ϸ���Ȩ��Ϊpublic�������Ϊprivate�ṹ���ⲻ�ܷ��ʡ�
															//�ۺ�����ͷ�ļ��б�����������������Դ�ļ��в�������ͷ�ļ����ܺ�������ʹ��ͷ�ļ���ͷ�ļ�������Դ�ļ�����������ͷ�ļ�һ�¡�

//struct Book
//{
////private:
//	string bookname;
//	string author;
//	int		time;
//
////private:
//public:
//	void showbook()
//	{
//		cout << "����Ϊ��" << bookname << endl;
//		cout << "�����ǣ�" << author << endl;
//		cout << "��������" << time <<endl;
//	}
//}jinpingmei = { "jinpingmei","lqw",20210907 };
//
//void 7()
//{
//	jinpingmei.showbook();
//	Book rouputuan = { "rouputuan",jinpingmei.author,20210908};
//	rouputuan.showbook();
//}

//#include<function_head.h>    �Ҷ����ͷ�ļ�

//test8 ����new��delete�ؼ��ֺͶ��������ԡ�  ���ۣ��ٿ�����new���������ѿռ䡣
//����������ѿռ��������Ѹ�ֵ��������������Ȼ���Գɹ���ֵ�������������delete���ָ���ͷ�ʱ��������Ŀռ��ʹ�õĿռ��С��һ�»ᱨ��

//void 8()
//{
//	//new int(175);
//	//int*a=new int(175);  ���뵥���ռ�
//	int* a = new int[10];
//	for (int i = 0; i < 12; i++)
//	{
//		*(a + i )= i;
//	}
//	for(int i = 0; i < 11; i++)
//	{
//		cout << *(a + i) << endl;
//	}
//	cout << "������ֵΪ" << a << endl << "a�Ĵ�СΪ"<<sizeof(a) << endl;
//
//     delete [] a;  //��������10��int�ռ�ȴʹ����12���ռ䡣
//}


//test8 �������ܷ�����Լ��ڲ������privateȨ�޵ĳ�Ա�����ͺ����� ���ۣ������з���Ȩ��Ĭ��Ϊprivate�� �ڴ��ಢ���ܷ��ʺ͵���С���е�privateȨ�޳�Ա�����ͺ����� 
//       ��С��ֻ�ܵ���Ĭ�Ϲ��캯��������趨��Ĭ�Ϲ��캯�����ᵼ��Ĭ�Ϲ��캯�������ṩ��ʾС����Ĭ�Ϲ��캯������  ����δ̽����ȫ�������ٿ���
//��privateȨ�޵ĳ�Ա���Ժͳ�Ա����������ͨ��������������ʡ�
//class smallperson
//{
//public:
//
//	void smallfunction()
//	{
//		cout << "����smllperson���еĺ���" << endl;
//	}
//	smallperson(int a)  //�Լ�������вι��캯��
//	{
//		//this->a = a;  //ͨ��thisָ������βκͳ�Ա����������ͻ
//		cout << "����smallperson����вι��캯��" << endl;
//	}
//
//	/*smallperson()
//		{
//			cout << "����small��Ĭ�Ϲ��캯��" << endl;
//		}*/
//	int a;
//};
//
//class bigperson
//{
//public :
//	void test()
//	{
//		cout << "���ǶԴ����µ�С���еĳ�Ա���Եķ���" << sp.a << endl;
//		cout << "���Ƕ�С���µĺ�������" << endl;
//		sp.smallfunction();
//	}
//	
//	bigperson()
//	{
//		cout << "����bigperson��Ĭ�Ϲ��캯��" << endl;
//	}
//
//	bigperson(int b)
//	{
//
//		cout << "bigperson���вι��캯��" << endl;
//		sp.a =b;
//	}
//	smallperson sp;
//};

int main()
{

	system("pause");
	return 0;
}
