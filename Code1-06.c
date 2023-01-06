////#include<iostream>
////using namespace std;
////int Add(int x, int y)
////{
////	return x + y;
////}
////double Add(double x,double y)
////{
////	return x+y;
////}
//
////#include<stdio.h>
////void Add(int x, double y)
////{
////	printf("%d %f", x, y);
////}
////void Add(double x,int y)
////{
////	printf("%f %d", x, y);
////}
////void test(int x,int y)
////{
////
////}
////int test(int x, int y)
////{
////}
////test(1, 2);
////int main()
////{
////	Add(1,1.2);
////	Add(3.14,32);
////	return 0;
////}
//struct ListNode* BuyNode(int val)
//{
//    struct ListNode* NewNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    if (NewNode == NULL)
//        exit(-1);
//    NewNode->val = val;
//    NewNode->next = NULL;
//    return NewNode;
//}
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//
//    struct ListNode* dummyhead = BuyNode(-1);
//    struct ListNode* prev = dummyhead;
//    int tail = 0;
//    while (l1 && l2)
//    {
//        int tmp = (l1->val + l2->val + tail) % 10;
//        tail = (l1->val + l2->val + tail) / 10;
//        struct ListNode* NewNode = BuyNode(tmp);
//        prev->next = NewNode;
//        prev = NewNode;
//        l1 = l1->next;
//        l2 = l2->next;
//    }
//    while (l1)
//    {
//        int tmp = (l1->val + tail) % 10;
//        tail = (l1->val + tail) / 10;
//        struct ListNode* NewNode = BuyNode(tmp);
//        prev->next = NewNode;
//        prev = NewNode;
//        l1 = l1->next;
//    }
//    while (l2)
//    {
//        int tmp = (l2->val + tail) % 10;
//        tail = (l2->val + tail) / 10;
//        struct ListNode* NewNode = BuyNode(tmp);
//        prev->next = NewNode;
//        prev = NewNode;
//        l2 = l2->next;
//    }
//    while (tail)
//    {
//        int tmp = tail % 10;
//        tail /= 10;
//        ////struct ListNode* NewNode = kBuyNode(tmp);
//        prev->next = NewNode;
//        prev = NewNode;
//    }
//    struct ListNode* Head = dummyhead->next;
//    free(dummyhead);
//    return Head;
//}