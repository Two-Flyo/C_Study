#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	int a = 3.123;
	return 0;
}

//int main()
//{
//	int num[10] = {1,1,2,4,4,6,6,5,3,3};
//	int x = 0;
//	for (int i = 0; i < 10; i++)
//		x ^= num[i];
//	int k = 0;
//	while (!(x >> k & 1)) k++;
//	int X = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (num[i] >> k & 1)
//		{
//			X ^= num[i];
//		}
//	}
//	int arr[2] = { X,x ^ X };
//	for (int i = 0; i < 2; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


//#include<stdio.h>
//void init(int* arr,int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		*(arr + i) = 0;
//	}
//}
//void print(int* arr,int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d", *(arr + i));
//	}
//	printf("\n");
//}
//void reverse_array(int* arr, int len)
//{
//	int start = 0;
//	int end = len - 1;
//	while (start<end)
//	{
//		int tmp = *(arr + end);
//		*(arr + end) = *(arr + start);
//		*(arr + start) = tmp;
//		start++, end--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	reverse_array(arr, sizeof(arr) / sizeof(int));
//	print(arr, sizeof(arr) / sizeof(int));
//	init(arr, sizeof(arr) / sizeof(int));
//	printf("\n��ʼ����:->");
//	print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}

//#include<stdio.h>
//void swap_array(int* arr1, int* arr2,int len)
//{
//	int tmp = 0;
//	int i = 0;
//	for (int i = 0; i < len; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//}
//int main()
//{
//	int i = 0;
//	int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
//	int arr2[10] = {9,8,7,6,5,4,3,2,1,0};
//	swap_array(arr1, arr2, sizeof(arr1) / (sizeof(int)));
//	for (i = 0; i < sizeof(arr1) / sizeof(int); i++)
//	{
//		printf("%d  ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sizeof(arr2) / sizeof(int); i++)
//	{
//		printf("%d  ", arr2[i]);
//	}
//
//	return 0;
//}

//void Bubble_sorting(int* num, int l)
//{
//	int i = 0;
//	for (i = 0; i < l-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < l-1-i; j++)
//		{
//			if (num[j] > num[j + 1])
//			{
//				int tmp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = tmp;
//			}
//		}
//	}
//}

//int main()
//{
//	printf("%d", ~(-1));
//	/*int max = 0, int min = 0;
//	int i = 0;
//	file:///F:/%E6%96%B0%E5%BB%BA%E6%96%87%E4%BB%B6%E5%A4%B9%20(2)/baidu-translate-client/resources/app.asar/app.html#int arr[7] = { 0 };
//	while (i < 7)
//	{
//		printf("%d", arr[i]);
//		i++;
//
//	}
//	return 0;*/
//}

//int main()
//{
//	char c;
//	c = getchar();
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	//1byte = 8bit
//	char a = 3; 
//	//00000011
//	char b = 127;
//	//01111111
//    //a��b����char���ͣ������С����1byte������ʱҪ������������
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	char c = a + b;
//	//11111111111111111111111110000010 - ����  
//	//10000000000000000000000001111110 - ԭ�� = -126
//	printf("%d", c);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	printf("%d\n", sizeof(arr));
//	printf("%d", strlen(arr));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	
//	
//	int* p = &a;
//	*p = 5;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = !a;
//	printf("%d", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	/*int a = 3;
//	int b = -2;
//	a = a ^ b;
//	b = b ^ a;
//	a = a ^ b;
//	return 0;*/
//}

//int main()
//{
//	int a = 3;
//	int b = -2;
//	int c = a ^ b;
//	printf("%d", c);
//	return 0;
//	
//}


//int main()
//{
//	double a;
//	scanf("%lf", &a);
//	printf("%lf", a);
//	return 0;
//}
//int main()
//{
//	//&  ��������λ��
//	//|  ��λ��
//	//^  ���
//	// %d ˵������Ҫ��ӡc��ֵ�����з�����ʽ��ӡ
//	// 00000000000000000000000000000011    a=3�Ĳ���
//	// 10000000000000000000000000000010    b
//	// 11111111111111111111111111111101
//	// 11111111111111111111111111111110    b=-2�Ĳ���
//
//	//a&b 
//	//00000000000000000000000000000011
//	//11111111111111111111111111111110
//	//00000000000000000000000000000010
//
//
//	int a = 3;
//	int b = -2;
//	int c = a | b;
//	//a|b 
//	//00000000000000000000000000000011
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
	//int ret = 9 / 2;
	//double ret= 9 / 2;
	//���ڳ���(/)���߶���������ִ�е���������
	// ���������и���������ִ�и���������
	//printf("%lf\n", ret);

	//double ret = 9 / 2.0;
	//printf("%lf", ret);

	//% ȡģ
	//ȡģ������ֻ�������������
	//int ret = 10% 4;
	//printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
	//int a = 15;
	//int b = a >> 1;//err - ��׼δ������Ϊ

	// >> --���Ʋ�����
	// 
	/*int a = 5;
	int b = a >> 1;
	printf("%d", b);*/

	//int a = -1;
	//int b = a >> 1;
	//printf("%d", b);
	//�߼����� - �ұ߶�������߲���
	//�������� - �ұ߶�������߲�ԭ����λ (VS2019������������)
	// << --���Ʋ����� ����߶������ұ߲���

	// >> --���Ʋ�����
/*	int a = 5;
	int b = a << 1;
	printf("%d  ", b);


	int c = -1;
	int d = c << 1;
	printf("%d", d);*///��ӡ��������ԭ��
	//��λ�������ƶ����Ƕ�����λ
	//���������Ķ�������3�ֱ�ʾ��ʽ��ԭ�� ���� ����
	//������ԭ�� ���� ������ͬ
	// 5��00000000000000000000000000000101
	//������
	//ԭ�� - ֱ�Ӱ������ֵ�����д���Ķ���������
	//���� - ԭ��ķ���λ���䣬����λ��λȡ���õ�
	//���� - ����+1
	//�������ڴ��д洢���Ƕ����ƵĲ���
//	return 0;
//}
