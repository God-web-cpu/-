#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	putchar(ch);
//
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("����������:>");
//	scanf("%s", input);
//	printf("��ȷ�����루Y/N��:>");
//	while ((ch = getchar()) != '\n')    //������뻺����
//	{
//		;
//	}
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//		
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
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
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)  //��������ҿ�
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)//forѭ���еĳ�ʼ�����жϡ���������ѡ����ʡ�ԣ����жϲ��ֱ�ʡ�ԣ���ζ���жϲ��ֺ�Ϊ�档
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} 
//	while (i < 10);
//	return 0;
//}
//����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	/*while (i <= n)
//	{
//		ret = ret*i;
//		i++;
//	}*/
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}
int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret*n;
		sum = sum + ret;
	}

	printf("%d\n", sum);
	return 0;
}

