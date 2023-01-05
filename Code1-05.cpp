////#include"test.h"
////using A::AA;
////using namespace AA;
////using namespace AAA;
////using A::Show;
//using Count::CountSort;
////using Count::void CountSort(int*nums,int len);
//void test1()
//{
//	int arr[] = {0,-1,-1,-1,-9,-9,-3,-2,-3,23,65,3,8,1,2,0,0,0,0,8,5,3,2,1,5,7};
//	int len = sizeof(arr) / sizeof(int);
//	CountSort(arr,len);
//	for (int i = 0; i < len; i++)
//		printf("%d ",arr[i]);
//}
//void func(int a = 10, int b = 9, int c = 8, int d = 7)
//{
//	cout << "a=" << a << " ";
//	cout << "b=" << b << " ";
//	cout << "c=" << c << " ";
//	cout << "d=" << d << endl;
//}
//void fun1(int a, int b = 1, int c = 2)
//{
//	cout << "a=" << a << " ";
//	cout << "b=" << b << " ";
//	cout << "c=" << c <<endl;
//
//
//}
////int main()
////{
////	/*cout << A::a << endl;
////	cout << B::a << endl;
////	::Show();
////	A::Show();
////	B::
////	Show();
////	test1();*/
////	//func();//10,9,8,7
////	//func(1);//1,9,8,7
////	//func(1, 2);//1,2,8,7
////	//func(1, 2, 3);//1,2,3,7
////	//func(1, 2,3,4);//1,2,3,4
////	/*fun1(1);
////	fun1(1,10);
////	fun1(1,10,19);*/
////	//cout << A::c << endl;
////	B::test1();
////	return 0;
////}
////int rand = 10;
////int main()
////{
////	/*int arr[] = { 1,2,3,4 };
////	int(*parr)[4] = &arr;
////	int(*(&pnums))[4] = parr;
////	int* a[] = { NULL,NULL };
////	int* (&b)[2] = a;
////	b[0] = arr;
////	*/
////	cout << rand <<endl;
////	return 0;
////}
//#include<iostream>
////using namespace std;
//int main()
//{
//	cout << "Hello World" << endl;
//	return 0;
//}
//#include<iostream>
////using namespace std;
//int main()
//{
//	cout << "Hello World" << endl;
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int xyz(int a, int b)
//{
//	return a + b;
//}
//int xyz(int a, int b)
//{
//	return a - b;
//}
//int main()
//{
//	printf("%p\n", rand);
//	return 0;
//}
//#include<iostream>
//using std::cout;
//using std::cin;
//using std::endl;

//namespace Hero
//{
//	void Show()
//	{
//		cout << "Hello Hero!" <<endl;
//	}
//	int main()
//	{
//		Show();
//		return 0;
//	}
//}
//using namespace Hero;
//#include<iostream>
using namespace std;
#include"test.h"
namespace Hero
{
	int a = 10;
	void Show()
	{
		cout << "Hello Hero!" << endl;
	}
}
namespace Tom
{
	int a = 10;
	void Show()
	{
		cout << "Hello Tom!" << endl;
	}
}
//using namespace Hero;
//3. 同一个工程中允许存在多个相同名称的命名空间, 编译器最后会合成同一个命名空间中。
// ps：一个工程中的test.h和上面test.cpp中两个N1会被合并成一个
// test.h
//namespace N1
//{
//	int Mul(int left, int right)
//	{
//		return left * right;
//	}
//}
//int func(int a, int b = 10, int c=9, int d=1)
//{
//
//}
//int main()
//{
//	A::ShowMul();
//	Show();
//	C::Show();
//	return 0;
//}
//void func(int a, int b, int c, int d);
//void func(int a,int b=0,int c=0,int d=9)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << d << endl;
//
////}
int g_val = 10;
void func(int a, int b = 0, int c = g_val, int d = 9);
void func(int a, int b, int c, int d)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;

}
int main()
{
	func(0);//无传参，使用默认值，输出10；
	cout << endl;
	func(66,1,2,3);//有传参，使用传参值，输出66；
	return 0;
}