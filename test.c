#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//����һ������-�������
//	int arr1[10]={1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0��
//	printf("%d\n", sizeof(arr1));
//	char arr3[5]={'a','b',99};
//	char arr5[5] = "ab";
//	char arr6[] = "abcdef";
//	printf("%d\n", sizeof(arr6));//sizeof----������ռ�ռ�Ĵ�С��7��Ԫ��--char 7*1=7
//	printf("%d\n", strlen(arr6));//strlen----�����ַ������ȣ�\0֮ǰ���ַ������ȡ�
//	float arr2[1];
//	double arr4[5];
//	return 0;
//}

//1.strlen �� sizeofû�й�ϵ��
//2.strlen �����ַ������ȵ�--ֻ������ַ����󳤶� - �⺯�� - ʹ�õ���ͷ�ļ�
//3.sizeof �Ǽ�����������顢���͵Ĵ�С  -  ��λ���ֽ� - ������

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//�������ڴ�����������ŵġ�
//	}
//	return 0;
//}

//int main()
//{
//	/*int arr[3][4]={1,2,3,4,5};*/
//	int arr2[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	/*int arr3[][4] = { {1,2,3,4},{5,6,7,8} };*/
//	return 0;
//}

//int main()
//{
//	int arr2[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr2[%d][%d] = %p\n",i,j, &arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}