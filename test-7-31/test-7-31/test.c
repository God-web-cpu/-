#define _CRT_SECURE_NO_WARNINGS 1
//void test()
//{
//	int a = 10;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	test();
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//	printf("a = %d\n", a);
//	int* p = &a;//p就是一个指针变量
//	*p = 20;//*---解引用操作
//	printf("a = %d\n", a);
//    return 0;
//}



//结构体：
//自己创建的类型----自定义类型
//创建一个书的类型
//struct Book
//{
//	//描述书的细节信息
//	char name[30];//书名
//	double price;//定价
//	char id[30];//编号
//};
//int main()
//{
//	//定义一本书
//	struct Book b1 = { "射雕英雄传", 55.62, "ISBN-100099809" };
//	//打印
//	struct Book* ps = &b1;
//	printf("书名:%s\n", ps->name);
////	printf("书名:%s\n", b1.name);
////	printf("定价:%lf\n", b1.price);
////	printf("编号:%s\n", b1.id);
////
//	return 0;
//}
// 
//int main()
//{
//	//int age = 10;
//	///*if (age < 18)
//	//	printf("未成年\n");*/
//	/*int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");*/
//	int age = 16;
//	if (age < 18)     //if后面只能跟一条语句，若要跟多条语句，必须加{}。
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 60)
//		printf("中老年\n");
//	else if (age >= 60 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

//判断一个数是不是奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//
//}
//输出1---100之间的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100){
//		if (i % 2 == 1){
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100){
//		if (i % 2 == 1){
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i = i + 2;
//	}
//	return 0;
//
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default://默认选项，处理不能被case处理的情况。
//		printf("输入错误\n");
//		break;
//	}
//	/*switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//
//	}*/
//	
//	
//	
//	
//	
//	/*if (1 == day)
//		printf("星期1\n");
//	else if (2 == day)
//		printf("星期2\n");
//	else if (3 == day)
//		printf("星期3\n");
//	else if (4 == day)
//		printf("星期4\n");
//	else if (5 == day)
//		printf("星期5\n");
//	else if (6 == day)
//		printf("星期6\n");
//	else if (7 == day)
//		printf("星期7\n");*/
//	return 0;
//}

//打印0---9
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//写代码将3个数按从大到小输出

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}
//写一个代码打印1---100之间所有3的倍数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//给定2个数，求最大公约数
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int min = (a > b ? b : a);
//	while (1)
//	{
//		if (a%min == 0 && b%min == 0)
//		{
//			printf("最大公约数是:%d\n", min);
//			break;
//		}
//			
//		min--;
//		
//	}
//	return 0;
//}
//int main()
//{
//	int a = 24;
//	int b = 18;
//	while (a%b)   // 辗转相除法
//	{
//		int r = a%b;
//		a = b;
//		b = r;
//
//	}
//	printf("最大公约数是：%d\n", b);
//	return 0;
//}
//打印1000---2000之间的闰年
//int main()
//{
//	int year = 1000;
//	int count = 0;
//	while (year <= 2000)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("闰年是:%d\n", year);
//			count++;
//		}
//			
//		year++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//打印100--200之间的素数
int main()
{
	int i = 100;
	int count = 0;
	while (i <= 200)
	{
		int j = 2;
		while (j < i)
		{
			if (i%j == 0)
			{
				break;
			}
			j++;
		}
		if (i == j)
		{
			printf("%d ", i);
			count++;
		}
		i++;
	}
	printf("\ncount=%d\n", count);
	return 0;

}