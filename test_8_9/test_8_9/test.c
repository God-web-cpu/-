#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//水仙花数
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int count = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//    return 0;
//}
//打印菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//
//		}
//		for (j = 0; j < 2 *(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%d\n", **ppa);
//	**ppa = 200;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//	return 0;
//}

//指针数组---存放指针（地址）的
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	//char* arr1[3];
//	return 0;
//}


//结构体
//struct Stu
//{
//	char name[20];
//	char id[18];
//	short age;
//	char sex[5];
//}s2,s3,s4;//全局变量
//int main()
//{
//	struct Stu s1;//局部变量
//
//	return 0;
//}
//struct S
//{
//	int a;
//	char c;
//	char arr[10];
//	double d;
//};
//typedef struct T
//{
//	char buf[20];
//	struct S s;
//	int *p;
//} T;
//int main()
//{
//	int a = 10;
//	struct S s = { 100, 'w', "bit", 3.14 };
//	T st = { "hello bit", {1000,'b',"abcdef",4.4}, &a };
//	//printf("%s\n", st.buf);//结构体成员的访问----"."
//	//printf("%d\n", st.s.a);
//	//printf("%c\n", st.s.c);
//	//printf("%s\n", st.s.arr);
//	//printf("%lf\n", st.s.d);
//	//printf("%d\n", *(st.p));
//	T* pt = &st;
//	printf("%s\n", pt-> buf);
//	printf("%lf\n", pt->s.d);
//
//	return 0;
//}

 /*struct Stu
{
	char name[20];
	char id[18];
	short age;
	char sex[5];
 };
 void print1(struct Stu tmp)
 {
	 printf("%s\t%s\t%d\t%s\n", tmp.name, tmp.id, tmp.age, tmp.sex);
 }
 void print2(struct Stu* ps)
 {
	 printf("%s\t%s\t%d\t%s\n", ps->name, ps->id, ps->age, ps->sex);

 }

 int main()
 {
	 struct Stu s = { "张三", "2019010305", 20, "男" };
	 print1(s);
	 print2(&s);
	 return 0;
 }*/
