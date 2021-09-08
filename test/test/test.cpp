#include <iostream>
using namespace std;
#include<string>


//test1  测试输出流头文件
//void test1()
//{
//	cout << "使用cout需要添加iostream头文件" << endl;
//
//	system("pause");
//
//}

//test2 测试给引用直接赋值常量地址 结论：直接给引用传递地址不可行,但给引用复制指针的解引用可以。 原因：int &b=a 被编译器自动改为int *b= *
//void test2()
//{
//	int a = 10;
//	int* p = &a;
//	int& b =* p;  //可行
//	//int& c = *a;  //不可行
//	cout << "b的值为：" << b << endl;
//}


//test3 测试未初始化的指针大小和指向。 结论：①未初始化的指针不会指向空，而是随机分配地址，也就是所谓的野指针。 ②指针大小在32位为32bit/8bit=4字节，在64位为64bit/8bit=8字节。
//void 3()
//{
//	int a = 10;
//	int* p=0;
//	cout << "a的地址为：" <<(int) &a<< endl;
//	cout << "指针p指向的地址为：" << &p << endl;
//	cout << "整型指针p的大小为" << sizeof(p) << endl;
//}

//test4 const关键字的应用。 结论：在函数形式参数中应用const关键字可以保护传入数据不被修改。
//void testcurrent(const int *a)
//{
//	// const int a = 10;
//	*a = 20;
//	cout << "b的值为" <<a<< endl;
//}

//test5 函数参数的默认值和函数重载的应用。 结论：①默认参数要在参数列表末尾，不然可能会引起函数重载错误。②返回值类型不能作为函数重载判断条件。
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


//test6 测试常量的地址和大小。 结论：①字符串常量的大小固定为28字节（32位系统下），原因sizeof（）计算的只是string这个数据结构的占用空间，而不是字符串本身。
//  ②字符串本质是const char * （字符型常量指针）  ③数组名字是首元素地址，指针法访问数组注意优先级。
//void 6()
//{
//	string name = "nihaoa";
//	cout << "string name:" << name << endl;
//	cout << "字符串常量的地址为" << &name << endl << "字符串的大小为" << sizeof(string) << endl;
//}

//void 6()
//{
//	char arr[] = {'n','h','\0','a'};
//	char* p = arr;
//		//cout << "string[]arr:" << arr<< endl;
//		cout << "字符数组的地址为" << arr << endl << "字符串的大小为" << sizeof(arr) << endl;
//		cout << "指针法访问字符数组：" << *(p+1) << endl;
//		cout << "字符数组第一个字符为" << arr[0] << endl;
//}

//test 7 测试结构体中能否有函数，以及函数的份文件编写。 结论：①结构体内可以有函数。②结构体默认访问权限为public，如果改为private结构体外不能访问。
															//③函数的头文件中必须声明函数，函数源文件中不必声明头文件；④函数可以使用头文件中头文件，函数源文件命名不必与头文件一致。

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
//		cout << "书名为：" << bookname << endl;
//		cout << "作者是：" << author << endl;
//		cout << "创作日期" << time <<endl;
//	}
//}jinpingmei = { "jinpingmei","lqw",20210907 };
//
//void 7()
//{
//	jinpingmei.showbook();
//	Book rouputuan = { "rouputuan",jinpingmei.author,20210908};
//	rouputuan.showbook();
//}

//#include<function_head.h>    我定义的头文件

//test8 测试new和delete关键字和堆区的特性。  结论：①可以用new创建匿名堆空间。
//②申请数组堆空间后，如果给堆赋值超过申请数量依然可以成功赋值和输出，但当你delete这个指针释放时由于申请的空间和使用的空间大小不一致会报错。

//void 8()
//{
//	//new int(175);
//	//int*a=new int(175);  申请单个空间
//	int* a = new int[10];
//	for (int i = 0; i < 12; i++)
//	{
//		*(a + i )= i;
//	}
//	for(int i = 0; i < 11; i++)
//	{
//		cout << *(a + i) << endl;
//	}
//	cout << "堆区的值为" << a << endl << "a的大小为"<<sizeof(a) << endl;
//
//     delete [] a;  //报错，申请10个int空间却使用了12个空间。
//}


void testcurrent()
{

}


int main()
{
	testcurrent();
	system("pause");
	return 0;
}
