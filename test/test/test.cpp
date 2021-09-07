#include <iostream>
using namespace std;



//test1  测试输出流头文件
//void test1()
//{
//	cout << "使用cout需要添加iostream头文件" << endl;
//
//	system("pause");
//
//}

//test2 测试给引用直接赋值常量地址 结论：直接给引用传递地址不可行,但给引用复制指针的解引用可以。 原因：int &b=a 被编译器自动改为int *b= *
void test2t()
{
	int a = 10;
	int* p = &a;
	int& b =* p;  //可行
	//int& c = *a;  //不可行
	cout << "b的值为：" << b << endl;
}



int main()
{
	testcurrent();
	system("pause");
}