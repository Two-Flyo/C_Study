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
//	char* ret = dest;//��¼��ʼ��ַ
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


//destָĿ��ռ䣬srcָԴͷ�ַ���(�汾2)
//void my_strcopy(char* dest, char* src)
//{
//	while (*dest++ = *src++) { ; }
//}


//destָĿ��ռ䣬srcָԴͷ�ַ���(�汾1)
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

	//2.Դ�ַ�����һ��Ҫ��'\0'
	//char arr1[] = { 'a','b','c' };
	//char arr2[10] = "xxxxxxxxxx";
	//char* ret = my_strcopy(arr2, arr1);
	//printf("%s", ret);

	//3.Ŀ��ռ�Ҫ�㹻��
	//char arr1[] = "abcdef";
	//char arr2[3] = { 0 };
	//char* ret = my_strcopy(arr2, arr1);
	//printf("%s", ret);
	//4.Ŀ��ռ������޸�
	//char arr1[] = "abcdef";
	//const char* arr2 = "abcdefghijk";//�����ַ������ڴ��еĳ����������ɱ��޸ģ�constʹ�޸ĵ�������Ϊ���﷨�ϱ���ֹ
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
//	//const����������ε���(*p),����*p���ܱ��޸�
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