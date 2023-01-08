//#include<iostream>
//#pragma warning (disable:4996)
//using namespace std;
//void ProBar()
//{
//	char bar[101] = { 0 };
//	char ch[] = {"|/-\\"};
//	int i = 0;
//	int y = 0;
//	while (i <= 100)
//	{//// printf( "\033[1;31;40m 输出红色字符 \033[0m" )//\033[显示方式;前景色;背景色m
//		y = rand() % 8 + 40;
//		int x = rand() % 8 + 30;
//		printf("[\033[7;%d;%dm%-100s\033[0m][\033[5;33;%dm%2d\033[0m%%][%c]\r",x,47,bar,y,i,ch[i%4]);
//		fflush(stdout);
//		_sleep(100);
//		if (i < 100)
//		{
//			bar[i] = '=';
//		}
//		i++;
//		if (i < 100)
//			bar[i] = '>';
//	}
//	printf("\n");
//}
//void testColor()
//{
//	printf("\033[5;31;47m \033[0m\n");// printf( "\033[1;31;40m 输出红色字符 \033[0m" )//\033[显示方式;前景色;背景色m
//}
//void test1()
//{
//	char ch[] = { "*****************************" };
//	int len = strlen(ch);
//
//}
//double func(float x,float y)
//{
//	return pow(x * x + y * y - 1, 3) - x * x * pow(y, 3);
//}
//void test3()
//{
//}
//
////int main()
////{
////	float i, j, a;
////	int index = 0;
////
////	system("color 0C");
////	for (i = 1.5f; i >= -1.5f; i -= 0.05f)
////	{
////		for (j = -1.5f; j <= 1.5f; j += 0.025f)
////		{
////			index %= 9;
////			a = (j * j + i * i - 1) * (j * j + i * i - 1) * (j * j + i * i - 1);
////			putchar((j * j + i * i - 1) * (j * j + i * i - 1) * (j * j + i * i - 1) - j * j * i * i * i <= 0.0f ? '*' : ' ');
////		}
////		puts("");
////	}
////}
//void test2()
//{
//	//-1.5f<x<1.5f
//	//-1<=y<1.5f
//	char key = '*';
//	for (float y = 1.5f; y >= -1.5f; y -= 0.1f)
//	{
//		key = '*';
//		for (float x = -1.5f; x <=1.5f; x += 0.05f)
//		{
//			if (func(x, y)<=0.0)
//			{
//				int x = rand() % 8 + 30;
//				printf("\033[1;%d;40m%c\033[0m",x, key);
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	srand((unsigned int)(time(NULL)));
//	//ProBar();
//	//testColor();
//	test2();
//	return 0;
//}