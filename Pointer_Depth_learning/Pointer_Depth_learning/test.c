#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�ص�����


//ʹ�ûص�����ʵ��һ��ͨ�õ�ð��������
struct stu
{
	char name[10];
	int age;
};

void swap(char* e1, char* e2,int width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++, e2++;
	}
}
int compar_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int compar_byname(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void print_arr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
}
void bubble_sort(void* base, size_t num, size_t width, int (*compar_int)(const void*, const void*))
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			//char���������Ľ������width����base�е�Ԫ��
			if (compar_int((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
void struct_compar()
{
	struct stu boy[3] = { {"ddd",11},{"aaa",8},{"bbb",15} };
	int len = sizeof(boy) / sizeof(boy[0]);
	//������������
	//qsort(boy, 3, sizeof(boy[0]), compar_byname);
	//��������Ƚ�
	bubble_sort(boy, 3, sizeof(boy[0]), compar_byname);
}
int main()
{
	//int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	//int len = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, len, sizeof(arr[0]),compar_int);
	//print_arr(arr, len);
	struct_compar();
	return 0;
}

// 
//void qsort(void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
// void*: �޾������͵�ָ��,�ܹ������������͵ĵ�ַ
//���ǲ��ܽ������㣺��������������


//
//int compar_byname(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int compar_byage(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age-((struct stu*)e2)->age;
//}
//
//int cmppar_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void struct_compar()
//{
//	struct stu boy[3] = { {"ddd",11},{"aaa",8},{"bbb",15} };
//	int len = sizeof(boy) / sizeof(boy[0]);
//	//������������
//	//qsort(boy, 3, sizeof(boy[0]), compar_byname);
//	//��������Ƚ�
//	qsort(boy, 3, sizeof(boy[0]), compar_byage);
//}
//
//void bubble_sort(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp=arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//		printf("%d ", arr[i]);
//}
//int main()
//{
//	struct_compar();
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, len);
//	qsort(arr, len, sizeof(arr[0]), cmppar_int);
//	print_arr(arr, len);
//	return 0;
//}

//int add(int x, int y) //���ͣ�int (*)(int,int)
//{
//	return x + y;
//}
//
//int sub(int x, int y) //���ͣ�int (*)(int,int)
//{
//	return x - y;
//}
//void Calc(int(*pf)(int, int))
//{
//	int ret = pf(3, 5);
//	printf("%d\n", ret);
//}
//int main()
//{
//	Calc(sub);
//	return 0;
//}

//ָ����ָ�������ָ��
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf) (int, int) = add;//����ָ��
//	int (*fparr[5])(int, int)={ add };//����ָ������
//	int (*(*ppfarr)[5])(int, int);
//	int (*(*ppfarr)[5]) (int, int) = &fparr;//ָ����ָ�������ָ��
//	return 0;
//}



//����ָ������
//int add(int x, int y) //���ͣ�int (*)(int,int)
//{
//	return x + y;
//}
//
//int sub(int x, int y) //���ͣ�int (*)(int,int)
//{
//	return x - y;
//}
//
//int mul(int x, int y) //���ͣ�int (*)(int,int)
//{
//	return x * y;
//}
//int div(int x, int y) //���ͣ�int (*)(int,int)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("******************************\n");
//	printf("*      1.add    2.sub        *\n");
//	printf("*      3.mul    4.div        *\n");
//	printf("*          0.exit             \n");		
//	printf("******************************\n");
//}
////(3)����ָ��
//�ص�����:ͨ������ָ����е���
//void Calc(int(*fp)(int, int))
//{
//	int x = 0, y = 0,ret=0;
//	printf("����������������:>");
//	scanf("%d %d", &x, &y);
//	ret = fp(x, y);
//	printf("%d", ret);
//}
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(add);
//			break;
//		case 2:
//			Calc(sub);
//			break;
//		case 3:
//			Calc(mul);
//			break;
//		case 4:
//			Calc(div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input!=-1);
//	return 0;
//}

//(2)����ָ�������Ż�
//int main()
//{
//	int input = 0;
//	do 
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("��ѡ��>\n");
//		scanf("%d", &input);	   //0  1   2   3   4
//		int (*pfArr[5])(int, int) = {0,add,sub,mul,div};//ת�Ʊ�
//		if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else if (input>=1&&input<=4)
//		{
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x,y);
//			printf("ret=%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}

//(1)switch case
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	do {
//		int x = 0, y = 0;
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == -1)
//		{
//			printf("�˳�\n");
//			break;
//		}
//		printf("����������������:>");
//		scanf("%d %d", &x, &y);
//		switch (input)
//		{
//		case 1:
//			ret = add(x, y);
//			break;
//		case 2:
//			ret = sub(x, y);
//			break;
//		case 3:
//			ret = mul(x, y);
//			break;
//		case 4:
//			ret = div(x, y);
//			break;
//		case -1:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//		printf("%d\n", ret);
//	} while (input!=-1);
//	return 0;
//}


//int main()
//{
//	//int* arr[10];//����ָ�룺��������ָ��
//	int (*pf1)(int, int) = add;
//	int (*pf2)(int, int) = sub;
//	int (*pf3)(int, int) = mul;
//	int (*pf4)(int, int) = div;
//	int (*pfarr[4])(int, int) = { sub,add,mul,div };
//	return 0;
//}

//����ָ��
// typedef void(*)(int) pfun_t;  ��
//   typedef void(*pfun_t)(int);// ��
//int main()
//{
//	void (*signal(int, void(*)(int))) (int);
//	//���������һ�κ����������ú����ĺ�����Ϊsignal��
//	//�ú����������������������ͷֱ�Ϊint�ͺ�void(*)(int)�͵ĺ���ָ�����ͣ�����ֵ����ҲΪvoid(*)(int) 
//	//void (*) (int) signal(int, void(*)(int));            ��
//	//typedef�򻯺�
//	pfun_t signal(int, void(*)(int));
//
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0) ();//��C������ȱ�ݡ�
//	//��0ǿ������ת��Ϊ��void(*)()���͵ĺ���ָ������
//	//(void(*)())0   ��ʾ0��ַ����һ����������Ϊ�޲Σ���������Ϊvoid�ĺ���
//	//*(void(*)())0  �ҵ��õ�ַ����������(*��ַ)()
//	//������0ǿ������ת��Ϊ����Ϊvoid(*)()��һ�������ĵ�ַ��������0��ַ������������������õ�����������޲Σ���������Ϊvoid
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("%p\n", &add);
//	printf("%p\n", add);
//	//int (*pf)(int,int) = &add;
//	int (*pf)(int, int) = add;
//	//int ret = (*pf)(4, 5); *���﷨���൱�ڡ����衱
//	int ret = pf(4, 5);
//
//	printf("%d\n", ret);
//	return 0;
//}


//ָ�봫��
//void fun(int**p)
//{
//
//}
//
//int main()
//{
//	int* arr[5] = { 0 };
//	fun(arr);
//	return 0;
//}

//void print(int* p, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(p,len);
//	return 0;
//}



//���鴫��

//fun(int arr[2][3]) {} ��
//fun(int arr[][]){}    ��
//fun(int arr[][3]){}   ��
//fun(int (*p)[3]){}
//int main()
//{
//	int arr[2][3] = { 0 };
//	fun(arr);
//	return 0;
//}

// һά����
//void fun(int arr[]){}
//void fun(int arr[10]) {}
//void fun(int arr[100]){} //�﷨���ԣ���������
//void fun(int* p){}

//void fun2(int*arr[10]){}
//void fun2(int*arr[]){}
//void fun2(int** p){}
//int main()
//{
//	//int arr[10] = { 0 };
//	//fun(arr);
//	int* arr[10] = { 0 };
//	fun2(arr);
//	return 0;
//}



//����ָ��
//void print2(int(*p)[5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p+i) + j));
//			printf("%d ",p[i][j]);
//
//		}
//		printf("\n");
//	}
//}
////��������Ҳ�Ƕ�ά����
//void print1(int arr[3][5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//void print2(int(*arr)[10], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		//printf("%d ", arr[0][i]);
//		printf("%d ", *(*(arr)+i));
//		//arr[0][i]<=>*(*(arr)+i)
//	}
//}
//
//void print1(int(*arr)[10],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//void print(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//print(arr, len);
//	//print1(&arr, len);//����д��
//	print2(&arr, len);
//	return 0;
//}
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
