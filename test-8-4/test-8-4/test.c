#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	 
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//
//	}
//
//	return 0;
//}
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯�ߺ�������λ�Ǻ���
//		system("cls");//ִ��ϵͳ����--cls--������Ļ��Ϣ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//			
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//
//	return 0;
//}



//��������Ϸ
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("*******1. play      0. exit*******\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	int guess = 0;
//	//1.����һ�������
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//
//}
//
//
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//�ػ�����
//#include <stdlib.h>
//int main()
//{
//	char input[100] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	printf("������:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//#include <stdlib.h>
//int main()
//{
//	char input[100] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		printf("������:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//
//	return;
//}



//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}


//��10���������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}