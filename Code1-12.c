#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
typedef struct TreeNode* QDataType;
typedef struct QListNode
{
    struct QListNode* next;
    QDataType val;
}QNode;

// 队列的结构 
typedef struct Queue
{
    QNode* front;
    QNode* rear;
}Queue;

//初始化队列
void QueueInit(Queue* q);
//销毁队列
void QueueDestroy(Queue* q);
//入队列
void QueuePush(Queue* q, QDataType x);
//出队列
void QueuePop(Queue* q);
//获取队头元素
QDataType QueueFront(Queue* q);
//获取队尾元素
QDataType QueueBack(Queue* q);
//获取队列元素个数
size_t QueueSize(Queue* q);
//队列判空
bool QueueEmpty(Queue* q);
//初始化队列
void QueueInit(Queue* q)
{
    assert(q);
    q->front = NULL;
    q->rear = NULL;
}
//销毁队列
void QueueDestroy(Queue* q)
{
    assert(q);
    QNode* cur = q->front;
    while (cur)
    {
        QNode* next = cur->next;
        free(cur);
        cur = next;
    }
    q->front = NULL;
    q->rear = NULL;
}

//开辟新节点
static QNode* BuyQNode(QDataType x)
{
    QNode* NewNode = (QNode*)malloc(sizeof(QNode));
    if (!NewNode)
    {
        printf("malloc fail!\n");
        exit(EXIT_FAILURE);
    }
    NewNode->next = NULL;
    NewNode->val = x;
    return NewNode;
}
//入队列
void QueuePush(Queue* q, QDataType x)
{
    assert(q);
    QNode* NewNode = BuyQNode(x);
    if (q->rear == NULL)
    {
        q->front = q->rear = NewNode;
    }
    else
    {
        q->rear->next = NewNode;
        q->rear = NewNode;
    }
}
//出队列
void QueuePop(Queue* q)
{
    assert(q);
    assert(QueueEmpty(q) == false);//判空
    QNode* next = q->front->next;
    free(q->front);
    q->front = next;
    if (q->front == NULL)//删除节点过后front指针指向NULL，表示无节点可删
        q->rear = q->front;
}
//队列判空
bool QueueEmpty(Queue* q)
{
    assert(q);
    return (q->front == q->rear && q->front == NULL);
}
//获取队头元素
QDataType QueueFront(Queue* q)
{
    assert(q);
    assert(!QueueEmpty(q));
    return q->front->val;
}
//获取队尾元素
QDataType QueueBack(Queue* q)
{
    assert(q);
    assert(!QueueEmpty(q));
    return q->rear->val;
}
//获取队列元素个数
size_t QueueSize(Queue* q)
{
    assert(q);
    QNode* cur = q->front;
    size_t count = 0;
    while (cur)
    {
        QNode* next = cur->next;
        count++;
        cur = next;
    }
    return count;
}
long long cmp0(const void* p1, const void* p2)
{
    return *(int*)p1 - *(int*)p2;
}
long long cmp1(const void* p1, const void* p2)
{
    return *(long long int*)p2 - *( long long *)p1;
}
bool is_EvOd(Queue*q,int size,int flag)
{
    long long (*cmp)(const void*, const void*) = NULL;
    long long (*arr[2])(const void*, const void*) = {cmp0,cmp1};
    cmp = arr[flag];
    long long prev = INT_MAX;
    prev = flag ? INT_MIN : INT_MAX;
    while (size)
    {
        struct TreeNode* cur = QueueFront(q);
        QueuePop(q);
        size--;
        long long tmp = cur->val;
        if (cmp(&prev,&tmp)>0)//合法
        {
            prev = cur->val;
            struct TreeNode* left = cur->left;
            struct TreeNode* right = cur->right;
            if (left)
            {
                if (left->val % 2 == flag)
                    return false;
                QueuePush(q, left);
            }
            if (right)
            {
                if (right->val % 2 == flag)
                    return false;
                QueuePush(q, right);
            }
        }
        else
            return false;
    }
    return true;
}
bool isEvenOddTree(struct TreeNode* root) {
    Queue q;
    QueueInit(&q);
    int step = 0;
    int size = 1;
    if (root->val % 2 == 0)
        return false;
    QueuePush(&q, root);
    while (!step || size)
    {
        if (step % 2)//层数为奇数
        {
            if (!is_EvOd(&q, size, 0))
                return false;
        }
        else//层数为偶数
        {
            if (!is_EvOd(&q, size, 1))
                return false;
        }
        //该层数据已经遍历完毕
        step++;
        size = QueueSize(&q);
    }
    return true;
}
void test1()
{
    struct TreeNode a = { .val = 5 };
    struct TreeNode b = { .val = 4 };
    struct TreeNode c = { .val = 2};
    struct TreeNode d = { .val = 3 };
    struct TreeNode e = { .val = 3 };
    struct TreeNode f = { .val = 7 };

   /* struct TreeNode g = { .val = 12 };
    struct TreeNode h = { .val = 8};
    struct TreeNode i = { .val = 6 };
    struct TreeNode j = { .val = 2 };*/
    a.left = &b; a.right = &c;
    b.left = &d; b.right = &e;
    c.left = &f; c.right = NULL;
    d.left = NULL; d.right = NULL;
    e.left = NULL; e.right = NULL;
    f.left = NULL; f.right = NULL;
   /* g.left = NULL; g.right = NULL;
    h.left = NULL; h.right = NULL;
    i.left = NULL; i.right = NULL;
    j.left = NULL; j.right = NULL;*/
    isEvenOddTree(&a);
}
int main()
{
    test1();
    return 0;
}
