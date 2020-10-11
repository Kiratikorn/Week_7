#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a[1000];
	int x,total = 0;
	scanf("%[^\n]", a);
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
		{
			x = a[i] - '0';
			for (int j = 1; 1; j++)
			{
				if (a[i + j] >= '0' && a[i + j] <= '9')
				{
					x *= 10;
				}
				else
				{
					break;
				}
			}
			total += x;
		}
	}
	printf("%d", total);
	return 0;
}