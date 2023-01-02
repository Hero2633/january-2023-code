//#include <stdio.h>
//#include<string.h>
////int main() {
////    int sum = 0;
////    int ch = 0;
////    while ((ch = getchar()) != '.')
////        sum = sum * 10 + ch - '0';
////    ch = getchar();
////    if (ch - '0' >= 5)
////        sum += 1;
////    printf("%d\n", sum);
////
////    return 0;
////}
////#include <stdio.h>
////#define Mul(x,y) ++x*++y
////int main()
////{
////	int a = 1;
////	int b = 2;
////	int c = 3;
////	printf("%d", Mul(a + b, b + c));
////	return 0;
////}
////int main()
////{
////	printf("%d\n",__LINE__);
////	return 0;
////}
////#include <stdio.h>
////#define a 10
////void foo();
////int main()
////{
////	printf("%d..", a);
////	foo();
////	printf("%d", a);
////	return 0;
////} 
////void foo() {
////#undef a
////#define a 50
////}
//#pragma warning (disable:4996)
////#include <stdio.h>
////int main() {
////    int n = 0;
////    scanf("%d", &n);
////    int arr[n];
////    int max = 0;
////    for (int i = 0; i < n; i++)
////    {
////        scanf("%d", arr + i);
////        max = arr[i] > max ? arr[i] : max;
////    }
////    int nums[max];
////    nums[0] = 1;
////    nums[1] = 2;
////    for (int i = 2; i < max; i++)
////    {
////        nums[i] = (2 * nums[i - 1] + nums[i - 2]) % 32767;
////    }
////    for (int i = 0; i < n; i++)
////    {
////        printf("%d\n", nums[arr[i] - 1]);
////    }
////    return 0;
////}
//#include <stdio.h>
//#include<string.h>
//int main() {
//    int chnum = 0;
//    int space = 0;
//    int num = 0;
//    int other = 0;
//    char ch = 0;
//    while ((ch = getchar()) != '\n')
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            chnum++;
//        else if (ch == ' ')
//            space++;
//        else if (ch >= '0' && ch <= '9')
//            num++;
//        else
//            other++;
//    }
//    printf("%d\n%d\n%d\n%d\n", chnum, space, num, other);
//    return 0;
//}