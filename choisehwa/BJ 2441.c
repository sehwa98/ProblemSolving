#include<stdio.h>
int main() {
	int n;
	int i, j, l;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (l = 0; l < i; l++)
			printf(" ");
		for (j = i; j < n; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
