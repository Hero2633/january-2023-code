//#include<iostream>
//using std::cout;
//using std::endl;
////int main()
////{
////	cout << "Hello World!" << endl;
////	return 0;
////}
///**
// * struct ListNode {
// *	int val;
// *	struct ListNode *next;
// * };
// */
// /**
//  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//  *
//  *
//  * @param head ListNode类
//  * @param m int整型
//  * @param n int整型
//  * @return ListNode类
//  */
//void reverseList(struct ListNode* head)
//{
//    struct ListNode* tail = NULL;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = tail;
//        tail = cur;
//        cur = next;
//    }
//}
//struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
//    // write code here
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    dummyhead->next = head;
//    struct ListNode* prev = dummyhead;
//    struct ListNode* next = NULL;
//    struct ListNode* mlist = head;
//    struct ListNode* nlist = head;
//    n = n - m;
//    while (--m)
//    {
//        prev = mlist;
//        mlist = mlist->next;
//        nlist = nlist->next;
//    }
//    while (n--)
//    {
//        nlist = nlist->next;
//    }
//    next = nlist->next;
//    nlist->next = NULL;
//    reverseList(mlist);
//    mlist->next = next;
//    prev->next = nlist;
//    struct ListNode* Head = dummyhead->next;
//    free(dummyhead);
//    return Head;
//}
//int getDecimalValue(struct ListNode* head) {
//    struct ListNode* cur = head;
//    int sum = 0;
//    while (cur)
//    {
//        sum = sum * 2 + cur->val;
//        cur = cur->next;
//    }
//    return sum;
//}
//int SearchBin(int* nums, int left, int right, int target)
//{
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (right - left) / 2 + left;
//        if (nums[mid] == target)
//            return mid;
//        else if (nums[mid] > target)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            left = mid + 1;
//        }
//    }
//    return -1;
//}
//int Search_(int* nums, int left, int right, int target)
//{
//    if (left >= right)
//        return -1;
//    int mid = (right - left) / 2 + left;
//    if (nums[mid] == target)
//        return mid;
//    else
//    {
//        if (nums[mid] > nums[right])
//        {
//            int ret;
//            return ((ret = SearchBin(nums, left, mid, target))) != -1 ? ret : Search_(nums, mid + 1, right, target);
//        }
//        else if (nums[mid] < nums[right])
//        {
//            int ret;
//            return ((ret = SearchBin(nums, mid, right, target))) != -1 ? ret : Search_(nums, left, mid - 1, target);
//        }
//        else
//        {
//            return Search_(nums, left, --right, target);
//        }
//    }
//}
//int search(int* nums, int numsSize, int target) {
//
//    return Search_(nums, 0, numsSize - 1, target);
//}