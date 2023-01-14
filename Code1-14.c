int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize){
       int max=arr2[0];
       *returnSize=arr1Size;
       //1、寻最大值，定数组长度
       for(int i=0;i<arr2Size;i++)
       {
           if(arr2[i]>max)
           max=arr2[i];
       }
       int len=max+1;//桶数组的长度;
       Queue**ppq=(Queue**)calloc(len,sizeof(Queue*));
       //2、开始给桶赋有效值
       for(int i=0;i<arr2Size;i++)
       {
           ppq[arr2[i]]=(Queue*)malloc(sizeof(Queue));
           QueueInit(ppq[arr2[i]]);
       }
        int other[1001]={0};//存储不合法的数据
       //QueueInit(&other);
       //3、开始遍历arr1数组
       for(int j=0;j<arr1Size;j++)
       {
           if(arr1[j]>max||ppq[arr1[j]]==NULL)//不在合法桶里面
           {
               other[arr1[j]]++;
           }
           else//合法
           {
               QueuePush(ppq[arr1[j]],arr1[j]);
           }
       }
      // 4、开始写回arr1数组
      int k=0;
      for(int i=0;i<arr2Size;i++)
      {
          while(QueueEmpty(ppq[arr2[i]])==false)
          {
              arr1[k++]=QueueFront(ppq[arr2[i]]);
              QueuePop(ppq[arr2[i]]);
          }
          QueueDestroy(ppq[arr2[i]]);
      }
      free(ppq);
     for(int i=0;i<1001;i++)
     {
         while(other[i]--)
         {
             arr1[k++]=i;
         }
     }
          return arr1;
}
char * sortSentence(char * s){
            char tmp[10][100]={0};
            int Len[10]={0};
            int len=strlen(s);
            int left=0;
            int right=0;
            int k=0;
            while(left<len)
            {
                while(right<len&&s[right]!=' ')
                right++;
                int index=s[right-1]-'0';
                Len[index]=right-left-1;
                s[right-1]='\0';
                strcpy(tmp[index],s+left);
                k++;
                left=++right;
            }
            int i=1;
            int j=0;
            while(k--)
            {
              strcpy(s+j,tmp[i]);
              j+=(Len[i]);
              s[j]=' ';
              j++;
              i++;
            }
            s[j-1]='\0';
            return s;

}
void Swap(int*a,int *b)
{
int tmp=*a;
*a=*b;
*b=tmp;
}
int GetMid(int left,int right)
{
    int mid=rand()%(right-left+1)+left;
    if(right>mid)
    {
        if(mid>left)
        return mid;
        else
        {
            if(left<right)
            return left;
            else
            return right;
        }
    }
    else
    {
        if(left<right)
        return right;
        else
        {
            if(mid<left)
            return mid;
            else
            return left;
        }
    }
}
void InsertSort(int *nums,int len)
{
    for(int i=0;i<len-1;i++)
    {
    int end=i;
    int key=nums[end+1];
    while(end>=0)
    {
        if(nums[end]<=key)
        break;
        else
        {
            nums[end+1]=nums[end];
            end--;
        }
    }
    nums[end+1]=key;
    }
}
void QuickSort(int*nums,int left,int right)
{
   if(left>=right)
   return;
   if(right-left+1<10)
   {
       InsertSort(nums+left,right-left+1);
       return;
   }
   int mid=GetMid(left,right);
   Swap(nums+mid,nums+left);
   int key=nums[left];
   int cur=left;
   int begin=left;
   int end=right;
   while(cur<=right)
   {
       if(nums[cur]==key)
       cur++;
       else if(nums[cur]<key)
       {
           Swap(nums+left,nums+cur);
           cur++;
           left++;
       }
       else
       {
           Swap(nums+right,nums+cur);
           right--;
       }
   }
   QuickSort(nums,begin,left-1);
   QuickSort(nums,right+1,end);
}
int Max(int a,int b)
{
    return a>b?a:b;
}
int findLHS(int* nums, int numsSize){
        QuickSort(nums,0,numsSize-1);
        int left=0;
        int right=0;
        int res=0;
        int tmp=0;
        while(right<numsSize)
        {
            while(right<numsSize&&(nums[right]-nums[left]<=1))
            right++;
            if(nums[left]!=nums[right-1])//进一步判断是不是和谐序列
            tmp=(right-left);
            else
            tmp=0;
            left++;
            res=Max(res,tmp);
        }
        return res;
}
