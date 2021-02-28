#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 10

int main(void)
{
	int* ptr = NULL;
	int i;

	ptr = (int*)malloc(N * sizeof(int));
	if (ptr == NULL)
	{
		exit(1);
	}

	memset(ptr, 0, N * sizeof(int));//把用malloc申请到的内存块都初始化为0
	for (i = 0; i < N; i++)
	{
		printf(" %d", ptr[i]);

	}
	putchar('\n');

	free(ptr);

	return 0;
}