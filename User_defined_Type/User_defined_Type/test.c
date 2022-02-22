#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>

union U1
{
	          //大小    对齐数
	char c[5];// 5        1 
	int i;    // 4        4
};
union U2
{
	             //大小    对齐数
	short c[7]; // 14        2
	int i;      // 4         4
};

int main()
{
	char a[5];//最大对齐数
	return 0;
}

//int main()
//{
//	//(1)
//	//int a = 1;
//	//1: 01 00 00 00
//	//低地址--------->高地址
//	//01 00 00 00    小端
//	//00 00 00 01    大端
//
//	//char* pa=(char*)&a;
//	//if (*pc == 1)
//	//	printf("小端\n");
//	//else
//	//	printf("大端\n");
//	//(2)
//	union U
//	{
//		char a;
//		int b;
//	}u;
//	u.b = 1;
//	if (u.b == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	
//	return 0;
//}

//union u
//{
//	char a;
//	int b;
//};
//
//int main()
//{
//	union u a = { 0 };
//	//printf("%d\n", sizeof(a));
//	printf("%p\n", &a);
//	printf("%p\n", &(a.a));
//	printf("%p\n", &(a.b));
//
//	return 0;
//}


//#define red 2
//#define green 5
//enum Color
//{
//	red=2,
//	blue=5,
//	green=7
//};
//
//int main()
//{
//	enum Color a = red;
//	printf("%d", a);
//
//	//printf("%d\n", red);
//	//printf("%d\n", blue);
//	//printf("%d\n", green);
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//struct A
//{
//	int _a : 15;//_a 2个bit位
//	int _b : 5;//_b 5个bit位
//	int _c : 7;//_c 10个bit位
//	int _d : 30;//_d 30个bit位
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}
////struct S
//{
//	int data[1000];
//	int num;
//};
//
//print1(struct S tmp)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", tmp.data[i]);
//	}
//	printf("\nnum=%d", tmp.num);
//}
//
//print2(const struct S* ps)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("\nnum=%d", ps->num);
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4,5,6,7,8,9,10},100 };
//	//print1(s);
//	print2(&s);
//	return 0;
//}

//struct S
//{
//	double a;
//	char b;
//	int c;
//};

//int main()
//{
//	printf("%u\n", offsetof(struct S, a));
//	printf("%u\n", offsetof(struct S, b));
//	printf("%u\n", offsetof(struct S, c));
//	return 0;
//}
//struct SS
//{
//	char a;
//	struct S ss;
//	double b;
//
//};
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct SS
//{
//	char c1;
//	char c2;
//	int a;
//};

//int main()
//{
//	struct S s = { 'x',100,'y' };
//	printf("%d\n", sizeof(struct S));
//	struct SS ss = { 'x','y',100 };
//	printf("%d\n", sizeof(struct SS));
//	return 0;
//}

//
//声明结构体类型
//struct BOOK{
//	int a;
//	int b;
//}n1 = { 1,2 }, n2 = { 3,4 };
//struct Book 
//{
//	char name[20];
//	char author[20];
//	int price;
//}b1,b2;//全局变量
//struct S
//{
//	double d;
//	char num[20];
//};
//
//int main()
//{
//	struct BOOK n3 = { 2,4 };//局部变量
//	return 0;
//}