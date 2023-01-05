#include"test.h"
void Show()
{
	cout << "Hello 全局" << endl;
}
namespace A {
	int c = 10;
	void Show()
	{
		cout << "Hello A" << endl;
	}
	int a = 1;
	namespace AA {
		int a = 2;
		namespace AA{
			int a = 3;
		}
	}
	void ShowMul()
	{
		int i = 1;
		int j = 1;
		for (i = 1; i <= 9; i++)
		{
			for (j = 1; j <= i; j++)
			{
				printf("%dx%-d=%-2d ", j, i, j * i);
			}
			cout << endl;
		}
	}
}
int B::a = 11;
namespace B
{
	void test1()
	{
		struct MyStruct p = {NULL,0};
		cout << p.vsl << endl;
		cout << p.next<< endl;
	}
	void Show()
	{
		cout << "Hello B" << endl;
	}
}
namespace Count {

	void CountSort(int* nums, int len)
	{
		int range = 0;
		int min = nums[0];
		int max = nums[0];
		//1、寻找最小值和最大值
		for (int i = 0; i < len; i++)
		{
			if (nums[i] > max)
				max = nums[i];
			if (nums[i] < min)
				min = nums[i];
		}
		range = max - min + 1;
		int* Count = (int*)calloc(range, sizeof(int));
		if (!Count)
			exit(-1);
		//2、开始计数
		for (int i = 0; i < len; i++)
		{
			Count[nums[i] - min]++;
		}
		int k = 0;
		//3、开始向原数组输入
		for (int i = 0; i < range; i++)
		{
			while (Count[i]--)
			{
				nums[k++] = i + min;
			}
		}
		free(Count);
	}
}
namespace wzy
{
	int SearchBin(int* nums, int left, int right, int target)
	{
		int mid = 0;
		while (left <= right)
		{
			mid = (right - left) / 2 + left;
			if (nums[mid] == target)
				return mid;
			else if (nums[mid] > target)
			{
				right = mid - 1;
			}
			else
				left = mid + 1;
		}
		return -1;
	}
	int search_part(int* nums, int left, int right, int target)
	{
		if (left > right)
			return -1;
		int mid = (right - left) / 2 + left;
		if (nums[mid] == target)
			return mid;
		else
		{
			int index = 0;
			if (nums[mid] < nums[right])
			{
				index = SearchBin(nums, mid, right, target);
				if (index != -1)
					return index;
				return search_part(nums, left, mid - 1, target);
			}
			else if (nums[mid] > nums[right])
			{
				index = SearchBin(nums, left, mid, target);
				if (index != -1)
					return index;
				return search_part(nums, mid + 1, right, target);
			}
			else
			{
				right--;
				return search_part(nums, left, right, target);
			}
		}
	}
	int search(int* nums, int numsSize, int target) {
		return search_part(nums, 0, numsSize - 1, target);
	}
}
namespace C {
	void Show()
	{
		cout << "Hello C" << endl;
	}
}