#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//回调函数


//使用回调函数实现一个通用的冒泡排序函数
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
			//char可以完美的结合所传width遍历base中的元素
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
	//按照名字排序
	//qsort(boy, 3, sizeof(boy[0]), compar_byname);
	//按照年领比较
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
// void*: 无具体类型的指针,能够接收任意类型的地址
//但是不能进行运算：±整数，解引用


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
//	//按照名字排序
//	//qsort(boy, 3, sizeof(boy[0]), compar_byname);
//	//按照年领比较
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

//int add(int x, int y) //类型：int (*)(int,int)
//{
//	return x + y;
//}
//
//int sub(int x, int y) //类型：int (*)(int,int)
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

//指向函数指针数组的指针
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf) (int, int) = add;//函数指针
//	int (*fparr[5])(int, int)={ add };//函数指针数组
//	int (*(*ppfarr)[5])(int, int);
//	int (*(*ppfarr)[5]) (int, int) = &fparr;//指向函数指针数组的指针
//	return 0;
//}



//函数指针数组
//int add(int x, int y) //类型：int (*)(int,int)
//{
//	return x + y;
//}
//
//int sub(int x, int y) //类型：int (*)(int,int)
//{
//	return x - y;
//}
//
//int mul(int x, int y) //类型：int (*)(int,int)
//{
//	return x * y;
//}
//int div(int x, int y) //类型：int (*)(int,int)
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
////(3)函数指针
//回调函数:通过函数指针进行调用
//void Calc(int(*fp)(int, int))
//{
//	int x = 0, y = 0,ret=0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = fp(x, y);
//	printf("%d", ret);
//}
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		printf("请选择\n");
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
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input!=-1);
//	return 0;
//}

//(2)函数指针数组优化
//int main()
//{
//	int input = 0;
//	do 
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("请选择>\n");
//		scanf("%d", &input);	   //0  1   2   3   4
//		int (*pfArr[5])(int, int) = {0,add,sub,mul,div};//转移表
//		if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else if (input>=1&&input<=4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x,y);
//			printf("ret=%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == -1)
//		{
//			printf("退出\n");
//			break;
//		}
//		printf("请输入两个操作数:>");
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
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//		printf("%d\n", ret);
//	} while (input!=-1);
//	return 0;
//}


//int main()
//{
//	//int* arr[10];//数组指针：存放数组的指针
//	int (*pf1)(int, int) = add;
//	int (*pf2)(int, int) = sub;
//	int (*pf3)(int, int) = mul;
//	int (*pf4)(int, int) = div;
//	int (*pfarr[4])(int, int) = { sub,add,mul,div };
//	return 0;
//}

//函数指针
// typedef void(*)(int) pfun_t;  ×
//   typedef void(*pfun_t)(int);// √
//int main()
//{
//	void (*signal(int, void(*)(int))) (int);
//	//这个代码是一次函数声明，该函数的函数名为signal，
//	//该函数有两个参数，参数类型分别为int型和void(*)(int)型的函数指针类型，返回值类型也为void(*)(int) 
//	//void (*) (int) signal(int, void(*)(int));            ×
//	//typedef简化后：
//	pfun_t signal(int, void(*)(int));
//
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0) ();//《C陷阱与缺陷》
//	//把0强制类型转换为：void(*)()类型的函数指针类型
//	//(void(*)())0   表示0地址处有一个函数参数为无参，返回类型为void的函数
//	//*(void(*)())0  找到该地址，并调用他(*地址)()
//	//即：把0强制类型转换为类型为void(*)()的一个函数的地址，解引用0地址处的这个函数，被调用的这个函数是无参，返回类型为void
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
//	//int ret = (*pf)(4, 5); *在语法上相当于“摆设”
//	int ret = pf(4, 5);
//
//	printf("%d\n", ret);
//	return 0;
//}


//指针传参
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



//数组传参

//fun(int arr[2][3]) {} √
//fun(int arr[][]){}    ×
//fun(int arr[][3]){}   √
//fun(int (*p)[3]){}
//int main()
//{
//	int arr[2][3] = { 0 };
//	fun(arr);
//	return 0;
//}

// 一维数组
//void fun(int arr[]){}
//void fun(int arr[10]) {}
//void fun(int arr[100]){} //语法可以，但不建议
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



//数组指针
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
////参数部分也是二维数组
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
//	//print1(&arr, len);//错误写法
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
