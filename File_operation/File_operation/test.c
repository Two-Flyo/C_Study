#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
struct a
{
	int b;
	double c;
	char str[10];
};

int main()
{
	char str[100] = { 0 };
	struct a tmp = { 1,2.33,"2333"};
	struct a t = { 0 };
	//��һ����ʽ��������ת��Ϊ�ַ���
	sprintf(str, "%d %lf %s\n", tmp.b, tmp.c, tmp.str);
	printf("%s\n", str);
	//���ַ�������ȡ��һ����ʽ��������
	sscanf(str, "%d %lf %s", &(t.b), &(t.c), t.str);
	printf("%d %lf %s\n", t.b, t.c, t.str);
	return 0;
}

//struct a
//{
//	int b;
//	double c;
//	char str[10];
//};
//int main()
//{
//	struct a tmp = {0};
//	FILE* pf = fopen("C:\\Users\\lenovo\\Desktop\\data.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//eд�ļ�
//	fread(&tmp, sizeof(struct a), 1, pf);
//	printf("%d %lf %s\n", tmp.b, tmp.c, tmp.str);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct a
//{
//	int b;
//	double c;
//};
//int main()
//{
//	struct a tmp = {0};
//	FILE* pf = fopen("C:\\Users\\lenovo\\Desktop\\data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�
//	fscanf(pf, "%d %lf", &(tmp.b), &(tmp.c));
//	printf("%d %lf", tmp.b, tmp.c);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct a
//{
//	int b;
//	double c;
//};
//int main()
//{
//	struct a tmp={233,2.3};
//	FILE* pf = fopen("C:\\Users\\lenovo\\Desktop\\data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�
//	fprintf(pf,"%d %lf", tmp.b, tmp.c);
//	// 
//	// ������
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\lenovo\\Desktop\\data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�
//	//��ȡһ��
//	char str[20] = { 0 };
//	fgets(str, 20, pf);
//	printf("%s", str);
//	fgets(str, 20, pf);
//	printf("%s", str);
//	// 
//	// ������
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("C:\\Users\\lenovo\\Desktop\\data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�
//	//дһ��
//	fputs("hello\n", pf);
//	fputs("world!", pf);
//
//	// 
//	// ������
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("C:\\Users\\lenovo\\Desktop\\data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�
//	int c = fgetc(stdin);
//	printf("%c", c);
//	c = fgetc(stdin);
//	printf("%c", c);
//	c = fgetc(stdin);
//	printf("%c", c);
//	/*int c = fgetc(pf);
//	printf("%c", c);
//
//	c = fgetc(pf);
//	printf("%c", c);
//
//	c = fgetc(pf);
//	printf("%c", c);*/
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	fputc('h', stdout);
//	fputc('h', stdout);
//	fputc('h', stdout);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("C:\\Users\\lenovo\\Desktop\\data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�
//	fputc('h', pf);
//	fputc('h', pf);
//	fputc('h', pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("C:\\Users\\lenovo\\Desktop\\data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�
//	//������
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}