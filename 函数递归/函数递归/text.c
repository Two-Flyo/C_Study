#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>


//1.�����һ������ʱ���ݹ�д�����Ƚϼ��ҵݹ�û���������⣬���õݹ�
//2.�����һ������ʱ���ݹ�д�����ϼ�

int Fib(int n)
{
	long long a = 1;
	long long b = 1;
	long long c = 1;
	while (n>2)
	{
		c = a + b;//��һ��ִ��n-2�Σ���Ϊn=1,2ʱ��ִ��
		a = b;
		b = c;
		n--;//Ϊ�����c=a+b;
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



//�ݹ������
//��n�Ľ׳�
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
//	char arr1[] = "abcd";  //arr1���ַ���������������б��0
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

//�ַ�ָ��+1�������1���ֽڣ���Ϊһ���ַ���һ���ֽ�  char* p;  p+1->>>�����һ���ֽ�
//����ָ��+1,�����4���ֽ�



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

//����ջ��Ĵ���������
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
////�ݹ�
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