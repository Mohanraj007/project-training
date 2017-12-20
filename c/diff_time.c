#include <stdio.h>

int main(void)
{
	int a[20],i,n,k,l,temp;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(k>0)
	{
	temp=a[0];
	for(i=0;i<n;i++)
	{
                       
		a[i]=a[i+1];
	
	}
	
             a[n-1]=temp;
             k--;
	}



	for(i=0;i<n;i++)
	{
  	 printf("\n%d",a[i]);
	} 
	return 0;
}
