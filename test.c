#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//创建一个数组-存放整型
//	int arr1[10]={1,2,3};//不完全初始化，剩下的元素默认初始化为0；
//	printf("%d\n", sizeof(arr1));
//	char arr3[5]={'a','b',99};
//	char arr5[5] = "ab";
//	char arr6[] = "abcdef";
//	printf("%d\n", sizeof(arr6));//sizeof----计算所占空间的大小。7个元素--char 7*1=7
//	printf("%d\n", strlen(arr6));//strlen----计算字符串长度，\0之前的字符串长度。
//	float arr2[1];
//	double arr4[5];
//	return 0;
//}

//1.strlen 和 sizeof没有关系。
//2.strlen 是求字符串长度的--只能针对字符串求长度 - 库函数 - 使用得引头文件
//3.sizeof 是计算变量、数组、类型的大小  -  单位是字节 - 操作符

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
//		printf("&arr[%d] = %p\n", i, &arr[i]);//数组在内存中是连续存放的。
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