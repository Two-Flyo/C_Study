#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ�崫��
struct Book
{
	char name[20];
	double price;
};

void print1(struct Book b)
{
	printf("%s %lf", b.name, b.price);
	printf("\n");
}

void print2(struct Book * b)
{
	printf("%s %lf", b->name, b->price);
	printf("\n");
}

int main()
{
	struct Book b = { "ƽ��������",55.00 };
	print1(b);
	print2(&b);
	return 0;
}

//struct S
//{
//	int a;
//	char b;
//};
//
//struct T
//{
//	struct S s;
//	int c;
//};
//
//
//int main()
//{
//	struct T t = { {1,'x'},12};
//	return 0;
//}
//�ṹ������
//struct Book
//{
//	char name[20];
//	char author[15];
//	float price;
//}b1,b2;//b1,b2�Ǹýṹ�崴����ȫ�ֱ���   �ڴ��еľ�̬��
//
//typedef struct Person
//{
//	char anme[20];
//	int age;
//}Person;
//int main()
//{
//	struct Book b = {"����"};//�ṹ��ľֲ�����
//	printf("%f", b.price);
//
//	return 0;
//}
