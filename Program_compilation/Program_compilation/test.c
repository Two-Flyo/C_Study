#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#define a 1
int main()
{
	printf("%d", Add(1, 2));
#if defined(a)
	printf("aa");
#endif
	return 0;
}

//#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int m = MAX(a++, b++);
//	printf("%d", m);
//	return 0;
//}

//
//#define PRINT(a) printf("The value of "#a" is %d\n",a);
//
//int main()
//{
//	int a = 10;
//	PRINT(a);
//	printf("The value of a is %d\n", a);
//	int b = 5;
//	PRINT(b);
//	return 0;
//}

//#define INT int
//typedef int int_t;
//#define ptr_t int*
//typedef int* ptr_t2;
//
//int main()
//{	
//	ptr_t p1, p2;
//	//预处理后替换为
//	int* p1, p2;//p1是指针，p2是整型
//	ptr_t2 p3, p4; //p3,p4都是指针
//	return 0;
//}


//#define SQUARE(X) X*X //宏
//
//int main()
//{
//	int a = 5;
//	int ret = SQUARE(5);
//	printf("%d\n", ret);
//	printf("%d\n", SQUARE(a + 5));//a+5*a+5 = 35
//	return 0;
//}

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	return 0;
//}

//extern int Add(int x, int y);

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int ret = Add(a, b);
//	printf("%d", ret);
//	return 0;
//}