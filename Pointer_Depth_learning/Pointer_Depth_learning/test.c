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
//����ָ��
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	print(arr, len);
	print1(&arr, len);//����д��
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
//	//����������Ԫ�ص�ַ������:
//	//1. sizeof(������) 2. &������
//	//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr;//arr����Ԫ�ص�ַ
//	&arr[0];//Ҳ����Ԫ�ص�ַ &arr[0]<=>arr
//	&arr;//ȡ������ĵ�ַ
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
//	int* p = arr; //������Ԫ�صĵ�ַ
//	int (*parr)[10] = &arr; // ����ĵ�ַ�����������ָ����
//	return 0;
//}


//ָ������->:���ָ�������
//int*
//char*
//short*
// ������
//
//int main()
//{
//	char* arr[5];//arr�Ǵ���ַ�ָ�������
//	int* arr2[4];//arr2�Ǵ������ָ�������
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
//	//�ַ�ָ��
//	char ch = 'w';
//	char* pc = &ch;
//	//printf("%c", *pc);
//	const char* p = "hello world!"; //�����ַ���  -> �ڴ泣���������ܱ��ı�
//	//*p = 'w';
//
//	//������ʽ�������ǰѳ����ַ����ĵ�һ���ַ�h�ĵ�ַ����p
//	printf("%c\n",*p);
//	printf("%s",p);
//
//	return 0;
//}
