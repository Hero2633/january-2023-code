#pragma once
#include<iostream>
//using std::cout;
//using std::cin;
//using std::endl;
using namespace std;
void Show();
namespace A
{
	extern int a;
	extern int c;
	namespace AA
	{
		extern int a;
		namespace AAA
		{
			extern int a;
		}
	}
	void Show();
	void ShowMul();
}
namespace B
{
	struct MyStruct
	{
		struct MyStruct* next;
		int vsl;
	};
	void test1();
	extern int a;
	void Show();
}
namespace Count { void CountSort(int* nums, int len); };
namespace wzy {

	int search(int* nums, int numsSize, int target);
	int SearchBin(int* nums, int left, int right, int target);
	int search_part(int*nums,int left,int right,int target);
}
namespace C { void Show(); }
