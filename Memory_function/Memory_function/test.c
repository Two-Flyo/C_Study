#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<memory.h>
#include<string.h>

//错误码
//错误信息
//strerror:返回C语言内置的错误码对应的错误信息
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		//printf("%s\n", strerror(errno));
		perror("测试");//打印+strerror()
	}
	else
		printf("success\n");
	return 0;
}

//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memset(arr, 1,24);//以每一个字节为单位初始化
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,15,5,10 };
//	int arr2[] = { 1,2,3,7,8,9 };
//
//	int ret = memcmp(arr1, arr2, 13);
//	printf("%d", ret);
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* start = dest;
//	if (dest < src)
//	{
//		//前->后拷贝
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前拷贝
//		while(count--)
//		{
//			*((char*)dest + count)= *((char*)src + count);
//		}
//	}
//	return start;
//}
//int main()
//{
//	//内存拷贝时，出现了内存重叠的情况下，应该使用memmove
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memmove(arr1+2, arr1, 16);
//	//my_memmove(arr + 2, arr, 16);
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* strat = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return strat;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2+3, arr1, 10 * sizeof(int));
//	memcpy(arr2, arr1, 10 * sizeof(int));
//	//memcpy 适用于完成内存不重叠的拷贝任务
//	for (int i = 0; i < 20; i++)
//		printf("%d ", arr2[i]);
//	return 0;
//}
