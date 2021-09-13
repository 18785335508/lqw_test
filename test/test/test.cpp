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


//test8 测试类能否访问自己内部的类的private权限的成员变量和函数。 结论：①类中访问权限默认为private。 ②大类并不能访问和调用小类中的private权限成员变量和函数。 
//       ③小类只能调用默认构造函数，如果设定非默认构造函数，会导致默认构造函数不再提供提示小类无默认构造函数错误。  问题未探究完全，留后再看。
//④private权限的成员属性和成员函数都不能通过对象在类外访问。
//class smallperson
//{
//public:
//
//	void smallfunction()
//	{
//		cout << "这是smllperson类中的函数" << endl;
//	}
//	smallperson(int a)  //自己定义的有参构造函数
//	{
//		//this->a = a;  //通过this指针避免形参和成员属性命名冲突
//		cout << "这是smallperson类的有参构造函数" << endl;
//	}
//
//	/*smallperson()
//		{
//			cout << "这是small的默认构造函数" << endl;
//		}*/
//	int a;
//};
//
//class bigperson
//{
//public :
//	void test()
//	{
//		cout << "这是对大类下的小类中的成员属性的访问" << sp.a << endl;
//		cout << "这是对小类下的函数调用" << endl;
//		sp.smallfunction();
//	}
//	
//	bigperson()
//	{
//		cout << "这是bigperson的默认构造函数" << endl;
//	}
//
//	bigperson(int b)
//	{
//
//		cout << "bigperson的有参构造函数" << endl;
//		sp.a =b;
//	}
//	smallperson sp;
//};

//test9 测试后置自减自加的时机。  结论：后置自减自加运算在变量当次出现过后，下一次出现时已经完成了运算，无需等到当前语句执行完毕。
//void test9()
//{
//	int purpose = 10;
//	cout << purpose++ << purpose << endl;
//}

//test10 测试析构函数对于深浅拷贝和成员函数以及构造函数的类外实现 结论：①成员函数的类外实现必须在函数明前加上作用域。②拷贝构造函数参数必须是被const修饰的引用！
																	//③深拷贝由程序员自己定义构造。
//class Purpose
//{
//public:
//	void contrast();
//	Purpose(string,int,int);             //我定义的有参构造函数，此时默认构造函数不再提供。
//	~Purpose();							// 由于构造函数中申请了堆空间，因此我定义了一个析构函数对对象的堆空间进行清除。
////	Purpose(Purpose copy);           将类的值作为参数的自定义拷贝构造函数不存在，因为这种值传递的拷贝函数就是默认的拷贝函数。
////	Purpose(Purpose * copy);		 将类的指针作为参数的自定义拷贝构造函数可以存在，但是这种构造函数仍然是浅拷贝。
//	Purpose(const Purpose &copy);
//	string condition;
//	int overall;
//	int* t;
//};
//
//Purpose::Purpose(string condition,int overall,int term)
//{
//	this->condition = condition;
//	this->overall = overall;
//	t = new int(term);
//	cout << "Purpose的构造函数" << endl;
//}
//
//Purpose::~Purpose()     //我提供的析构函数。
//{
//	delete t;
//	cout << "这是Purpose的析构函数" << endl;
//}

//Purpose::Purpose(Purpose copy)           
//{
//	this->condition = copy.condition;
//	this->overall = copy.overall;           值为参数的拷贝构造函数
//	this->t = copy.t;
//}

//Purpose::Purpose(Purpose * copy)
//{
//	this->condition = copy->condition;		指针为参数的拷贝构造函数
//	this->overall = copy->overall;
//	this->t = copy->t;
//}

//Purpose::Purpose(const Purpose & copy)
//{
//	this->condition = copy.condition;
//	this->overall = copy.overall;			//被const修饰的引用为参数的拷贝构造函数，正确用法。
//											//通过定义申请堆区的拷贝函数进行深拷贝，避免析构函数出现非法操作。
//	this->t = new int(*copy.t);
//}
//
//
//
//void Purpose::contrast()
//{
//	cout << "conditon=" << &condition<<endl;
//	cout << "overall=" << overall << endl;
//	cout << "*t_value" << *t << endl;
//	cout << "t_positon" << t << endl;
//}
//
//void test10()
//{
//	Purpose p = Purpose("stable", 666,123);    //这里实际是调用构造函数创建了一个匿名对象，然后将该匿名对象取名作P。
////	Purpose p("stable", 666, 123);
//	p.contrast();
//	Purpose b(p);   //我并没有定义这个参数的函数重载，这个函数重载是系统提供的默认拷贝函数，拷贝方式为浅拷贝。 
//					//这种情况下由于构造函数中有堆空间的开辟，析构函数对对象清除时会造成重复对同一片空间清除的非法操作。 要解决这种情况只有我自己定义拷贝函数进行深拷贝。
//	b.contrast();
//}
int main()
{
	test10();
	system("pause");
	return 0;
}
