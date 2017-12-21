#include <stdio.h>

int main(void)
{
	int a,i;
	scanf("%d",&a);
	i=2;
	while(i<=a)
	{
		if(i==a)
		{
			printf("Yes");
			break;
		}
		i=i*2;
	}
	if(i>a)
	{
		printf("No");
	}
	return 0;
}
