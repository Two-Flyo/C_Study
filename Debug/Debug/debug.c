#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

int count_bit_one(int x)
{
	int count = 0;
	while (x)
	{
		if (x & 1 == 1)
			count++;
		x >>= 1;
	}
	return count;
}


int main()
{
	/*int x = 0;
	scanf("%d", &x);
	printf("%d", count_bit_one(x));*/
	if (-3 == (~3 + 1))
	{
		printf("1");
	}
	return 0;
}

//char* my_strcopy(char* dest, const char* src)
//{
//	char* ret = dest;//记录起始地址
//	assert(src&&dest);
//
//	while (*dest++ = *src++) { ; }
//	return ret;
//}
//
//int my_strlen(const char* str)
//{
//	assert(str);
//	int len = 0;
//	while (*str++)
//	{
//		len++;
//	}
//	return len;
//}
//
//int main()
//{
//	while ('0')
//	{
//		printf("aaa");
//	}
//	//char str[] = "abcsdcdsadadaa0aa";
//	//int len = my_strlen(str);
//	//printf("%d", len);
//	return 0;
//}


//dest指目标空间，src指源头字符串(版本2)
//void my_strcopy(char* dest, char* src)
//{
//	while (*dest++ = *src++) { ; }
//}


//dest指目标空间，src指源头字符串(版本1)
//void my_strcopy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest++ = *src++;
//		        //or
//		//*dest = *src;
//		//dest++, src++;
//	}
//	*dest = *src;
//}


//int main()
//{
	//strcpy
	//1.
	//char arr1[] = "abcdef";
	//char arr2[10] = "xxxxxxxx;
	//char* ret = my_strcopy(arr2, arr1);
	//printf("%s", ret);

	//2.源字符串中一定要有'\0'
	//char arr1[] = { 'a','b','c' };
	//char arr2[10] = "xxxxxxxxxx";
	//char* ret = my_strcopy(arr2, arr1);
	//printf("%s", ret);

	//3.目标空间要足够大
	//char arr1[] = "abcdef";
	//char arr2[3] = { 0 };
	//char* ret = my_strcopy(arr2, arr1);
	//printf("%s", ret);
	//4.目标空间必须可修改
	//char arr1[] = "abcdef";
	//const char* arr2 = "abcdefghijk";//常量字符串在内存中的常量区，不可被修改，const使修改的这种行为在语法上被禁止
	////*arr2 = "qwert";
	//char* ret = my_strcopy(arr2, arr1);
	//printf("%s", ret);
	//return 0;
//}
//int main()
//{
//	int num = 233;
//	const int* const p = &num;
//	//<=> int const* p = &num;
//	//const放在左边修饰的是(*p),所以*p不能被修改
//	int* p = &num;
//	printf("%d", num);
//	return 0;
//}

// 
// 
////
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8};
//	for (int i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hh");
//	}
//
//	return 0;
//}