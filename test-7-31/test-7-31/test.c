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
//	int* p = &a;//p����һ��ָ�����
//	*p = 20;//*---�����ò���
//	printf("a = %d\n", a);
//    return 0;
//}



//�ṹ�壺
//�Լ�����������----�Զ�������
//����һ���������
//struct Book
//{
//	//�������ϸ����Ϣ
//	char name[30];//����
//	double price;//����
//	char id[30];//���
//};
//int main()
//{
//	//����һ����
//	struct Book b1 = { "���Ӣ�۴�", 55.62, "ISBN-100099809" };
//	//��ӡ
//	struct Book* ps = &b1;
//	printf("����:%s\n", ps->name);
////	printf("����:%s\n", b1.name);
////	printf("����:%lf\n", b1.price);
////	printf("���:%s\n", b1.id);
////
//	return 0;
//}
// 
//int main()
//{
//	//int age = 10;
//	///*if (age < 18)
//	//	printf("δ����\n");*/
//	/*int age = 20;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");*/
//	int age = 16;
//	if (age < 18)     //if����ֻ�ܸ�һ����䣬��Ҫ��������䣬�����{}��
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	
//	else if (age >= 18 && age < 30)
//		printf("����\n");
//	else if (age >= 30 && age < 60)
//		printf("������\n");
//	else if (age >= 60 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
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

//�ж�һ�����ǲ�������
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//
//}
//���1---100֮�������
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
//	default://Ĭ��ѡ������ܱ�case����������
//		printf("�������\n");
//		break;
//	}
//	/*switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//
//	}*/
//	
//	
//	
//	
//	
//	/*if (1 == day)
//		printf("����1\n");
//	else if (2 == day)
//		printf("����2\n");
//	else if (3 == day)
//		printf("����3\n");
//	else if (4 == day)
//		printf("����4\n");
//	else if (5 == day)
//		printf("����5\n");
//	else if (6 == day)
//		printf("����6\n");
//	else if (7 == day)
//		printf("����7\n");*/
//	return 0;
//}

//��ӡ0---9
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
//д���뽫3�������Ӵ�С���

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
//дһ�������ӡ1---100֮������3�ı���
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
//����2�����������Լ��
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int min = (a > b ? b : a);
//	while (1)
//	{
//		if (a%min == 0 && b%min == 0)
//		{
//			printf("���Լ����:%d\n", min);
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
//	while (a%b)   // շת�����
//	{
//		int r = a%b;
//		a = b;
//		b = r;
//
//	}
//	printf("���Լ���ǣ�%d\n", b);
//	return 0;
//}
//��ӡ1000---2000֮�������
//int main()
//{
//	int year = 1000;
//	int count = 0;
//	while (year <= 2000)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("������:%d\n", year);
//			count++;
//		}
//			
//		year++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//��ӡ100--200֮�������
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