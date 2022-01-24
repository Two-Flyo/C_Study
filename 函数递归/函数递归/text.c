#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>


//1.当解决一个问题时，递归写起来比较简单且递归没有明显问题，就用递归
//2.当解决一个问题时，递归写起来较简单

int Fib(int n)
{
	long long a = 1;
	long long b = 1;
	long long c = 1;
	while (n>2)
	{
		c = a + b;//这一步执行n-2次，因为n=1,2时不执行
		a = b;
		b = c;
		n--;//为了配合c=a+b;
	}
	return c;

}
//int Fib1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//
//}
int main()
{
	int n = 0;
	scanf("%d", &n);
	long long ret = Fib(n);
	printf("%lld\n", ret);

	return 0;
}



//递归与迭代
//求n的阶乘
//#include<stdio.h>
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n* Fac(n - 1);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//
//}

//int main()
//{
//	char arr1[] = "abcd";  //arr1是字符串声明，后面有斜杠0
//	char arr2[] = { 'a','b','c','d' };
//	return 0;
//
//}


//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* s)
//{
//	if (*s != '\0')
//	{
//		return 1+my_strlen(++s);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	
//	char arr[10] = "161626262";
//	int len=my_strlen(arr);
//	printf("%d", len);
//	return 0;
//
//}	

//字符指针+1，向后跳1个字节，因为一个字符是一个字节  char* p;  p+1->>>向后跳一个字节
//整形指针+1,向后跳4个字节



//int my_strlen(char* s )
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[10] = "abcdef";
//	int len=my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//函数栈桢的创建与销毁
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
////递归
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//
//	return 0;
//}

//int add(int a, int b);
//int main()
//{
//	int a = 120, b =3  0;
//	int ret = add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//// 