// Program to transpose a matrix

#include<stdio.h>

int main()
{
	int arry[2][3], i, j;

	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
			scanf_s("%d", &arry[i][j]);
	}

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			printf("%d\t", arry[j][i]);
		}
		printf("\n");
	}
	return(0);
}