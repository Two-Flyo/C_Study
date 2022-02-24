#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

typedef struct st_type
{
    int i;
    int a[];//柔性数组成员
}type_a;

int main()
{
    struct st_type* ps = (struct st_type*)malloc(sizeof(struct st_type) + 10 * sizeof(int));
    if (ps == NULL)
    {  
        printf("%s\n", strerror(errno));
        return -1;
    }
    //开辟成功
    ps->i = 100;
    for (int i = 0; i < 10; i++)
    {
        ps->a[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ps->a[i]);
    }
    //空间不够了
    struct st_type* tmp = (struct st_type*)realloc(ps, sizeof(struct st_type) + 20 * sizeof(int));
    if (tmp == NULL)
    {
        printf("realloc failed\n");
        return -1;
    }
    else
    {
        ps = tmp;
    }
    //继续使用
    //···
    //释放
    free(ps);
    ps = NULL;
    return 0;
}
//int main()
//{
//	char* p = "hello!";
//	printf(p);
//	return 0;
//}

////
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL) return - 1;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//		return -1;
//	for (int i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	free(p);//错误的方法
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//		return -1;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	int *ptr=(int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//		p = ptr;
//	for (int i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(1000000000000, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	printf("calloc success!\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	int a = 3;
//	if (p == NULL)
//	{
//		return -1;
//	}
//	for(int i=0;i<10;i++)
//	{
//		*(p + i) = i;
//	}
//	printf("hhhh");
//	return 0;
//}