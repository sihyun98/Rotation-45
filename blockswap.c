#include "Rotation.h"

void swap(char arr[], int a, int b, int d)
{
	for (int i = 0; i < d; ++i)
	{
		char temp = arr[a + i];
		arr[a + i] = arr[b + i];
		arr[b + i] = temp;
	}
}

void blockswap(char arr[], int n, int d)
{
	int temp = 0, pos_d = 0, temp_d = 0;
	if (d == 0 || d == n)
		return;
	else if (d < 0)	
	{
		pos_d = -d;
		int sizeA = pos_d;
		int sizeB = n - pos_d;
		while (sizeA != sizeB)
		{
			if (sizeA < sizeB)
			{
				swap(arr, pos_d - sizeA, pos_d + sizeB - sizeA, sizeA);
				sizeB -= sizeA;
			}
			else
			{
				swap(arr, pos_d - sizeA, pos_d, sizeB);
				sizeA -= sizeB;
			}
		}
		swap(arr, pos_d - sizeA, pos_d, sizeA);
	}
	else			
	{
		temp_d = (n - d);
		int sizeA = temp_d;
		int sizeB = n - temp_d;
		while (sizeA != sizeB)
		{
			if (sizeA < sizeB)
			{
				swap(arr, temp_d - sizeA, temp_d + sizeB - sizeA, sizeA);
				sizeB -= sizeA;
			}
			else
			{
				swap(arr, temp_d - sizeA, temp_d, sizeB);
				sizeA -= sizeB;
			}
		}
		swap(arr, temp_d - sizeA, temp_d, sizeA);
	}
}
