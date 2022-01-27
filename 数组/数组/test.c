#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr + 1);
//}

//数组名就是首元素的地址，但有两个例外
//1.sizeof(数组名),这里的数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小
//2.&数组名，这里的数组名表示整个数组，取出的是数组的地址



//数组名在传递给函数的时候，会降级变成首元素地址
//数组传参实际上传过去的是首元素地址

//void Print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ",p[i]);
//		//printf("%d ", *(p + i));
//		printf("%d ",*p++);//多种方法
//	}
//}
//
//void Sort(int* arr,int sz)//冒泡排序
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;//对于冒泡排序的优化
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,4,2,3,8,7,5,6,9,0 };
//	//数组传参
//	//排序
//	//数组名单独放在sizeof内部时，如sizeof(arr),这里的arr表示整个数组，不是首元素地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Sort(arr,sz);
//
//	Print(arr,sz);
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	int i = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//
//		p++;
//	}
//	

	//int arr[5] = { 1,2,3,4,5 };
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	//
	/*int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,10} };
	int i = 0;
	for (int i = 0; i < 3; i++)
	{
		int j = 0;
                                                                                                                                                                                                          		for (j = 0; j < 5; j++)
		{
			printf(" &arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}

	return 0;
}*/

//int main()
//{
//	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,10} };可以认为二维数组有3个元素，每个元素是一个一维数组
//	int i = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[3][5];
//	char ch[4][6];//"[行][列]"
//	int arr1[3][5] = { 1,2,3,4,5,6,7,8,9,10 };//以行为主序初始化，剩余元素默认初始化为0
//	int arr2[3][5] = { {1,2},{3,4},{5,6} };//相当于直接指定行列元素
//	int arr3[][5] = { {1,2},{3,4},{5,6} };//行可以省略，列不可以
//    char ch1[4][6] = { 'a','b','c' };
//    char ch2[4][6]={"abc","def","ikj"};//每行四个元素（多一个\0），剩余元素初始化为0或者理解为\0,\0的ASCII值为0
//	return 0;
//}

void test(int arr[5])
{
	arr[8] = 13;
	printf("%d", arr[8]);
}

int main()
{
	int arr[5] = { 0 };
	test(arr);

}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);//一个字节对应一个地址，一个int4个字节
//		//数组随着下标的增长，地址由低到高变化
//	}
//	return 0;
//}

//int main()
//{
//	//[]下表引用操作符
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",arr[4]);
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	return 0;
//}

//int arr[5];//定义全局数组默认为0
//
//int main()
//{
//	//int arr[20];//数组创建好之后元素都是随机值
//	int arr2[20] = { 1,2,3 };//不完全初始化，剩余元素默认初始化为0
//	int arr[] = { 1,3,5 };
//	char arr3[] = "abc";//包含a b c \0
//	char arr4[] = { 'a','b','c' }; //包含a b c
//	//数组元素通过数组下标进行访问，从0开始
//
//	return 0;
//}

//数组名就是首元素的地址，但有两个例外
//1.sizeof(数组名),这里的数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小
//2.&数组名，这里的数组名表示整个数组，取出的是数组的地址
//