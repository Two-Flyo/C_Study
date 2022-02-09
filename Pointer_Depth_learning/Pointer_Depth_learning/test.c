#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int(*arr)[10], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *(arr + i));
	}
}

void print1(int(*arr)[10],int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *(arr + i));
	}
}
void print(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *(arr+i));
	}
}
//数组指针
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	print(arr, len);
	print1(&arr, len);//错误写法
	print2(&arr, len);
	return 0;
}
// 
//int main()
//{
//	int* arr[10];
//	int* (*p)[]=&arr;
//	return 0;
//}

//int main()
//{
//	//数组名是首元素地址的例外:
//	//1. sizeof(数组名) 2. &数组名
//	//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr;//arr是首元素地址
//	&arr[0];//也是首元素地址 &arr[0]<=>arr
//	&arr;//取出数组的地址
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	printf("\n");
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr; //数组首元素的地址
//	int (*parr)[10] = &arr; // 数组的地址，存放在数组指针中
//	return 0;
//}


//指针数组->:存放指针的数组
//int*
//char*
//short*
// ···
//
//int main()
//{
//	char* arr[5];//arr是存放字符指针的数组
//	int* arr2[4];//arr2是存放整型指针的数组
//
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int* arr3[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr3[i]));
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,5 };
//	int arr3[] = { 1,2,3,4,5 };
//
//	int* Arr[3] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			printf("%d ", Arr[i][j]);
//		printf("\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	const char* arr[5] = {"abcdef","ghijklm","nopqrst","uvw","xyz"};
//	char** p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello,world!";
//	char str2[] = "hello,world!";
//	const char* str3 = "hello,world!";
//	const char* str4 = "hello,world!";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else 
//		printf("str1 and str2 are not same\n");
//
//	if(str3==str4)
//		printf("str3 and str4 are same\n");
//	else 
//		printf("str3 and str4 are not same\n");
//
//
//	return 0;
//}
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* pc = &ch;
//	//printf("%c", *pc);
//	const char* p = "hello world!"; //常量字符串  -> 内存常量区，不能被改变
//	//*p = 'w';
//
//	//上面表达式的作用是把常量字符串的第一个字符h的地址赋给p
//	printf("%c\n",*p);
//	printf("%s",p);
//
//	return 0;
//}
