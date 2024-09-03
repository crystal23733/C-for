#include<stdio.h>

int main(void)
{
	int i, j, num;
	printf("2이상의 정수를 입력해주세요:");
	scanf("%d",&num);
	for(i = 2; i <= num; i++)
	{
		for(j = 2; j < i; j++)
		{
			if(i % j == 0) break;
		}
		if(i == j) printf("%d ", i);
	}
	return 0;
}
