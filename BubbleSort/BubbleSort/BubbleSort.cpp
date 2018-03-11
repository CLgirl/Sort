#include<iostream>
#include"swap.h"
using namespace std;

void BulleSort1(int arr[], int len)
{
	if (arr == NULL || len == 0) return;
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - 1 - i; ++j)
		{
			if (arr[j]>arr[j + 1]) swap(&arr[j], &arr[j + 1]);
		}
	}
}
void BulleSort2(int arr[], int len)
{
	if (arr == NULL || len == 0) return;
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = len - 2; j >= i; --j)
		{
			if (arr[j]>arr[j + 1]) swap(&arr[j],&arr[j + 1]);
		}
	}
}
void BulleSort3(int arr[], int len)
{
	if (arr == NULL || len == 0) return;
	bool flag = true;
	for (int i = 0; i < len - 1 && flag; ++i)
	{
		flag = false;
		for (int j = len - 2; j >= i; --j)
		{
			if (arr[j]>arr[j + 1]) swap(&arr[j], &arr[j + 1]);
			flag = true;
		}
	}
}
int main()
{
	int arr[] = { 9, 1, 5, 8, 3, 7, 4, 6, 2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BulleSort3(arr, len);
	Print(arr, len);
	int arr1[] = { 2, 1, 3, 4, 5, 6, 7, 8, 9 };
	int len1 = sizeof(arr) / sizeof(arr[0]);
	BulleSort3(arr1, len1);
	Print(arr1, len1);
	return 0;
}