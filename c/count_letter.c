#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[20];
	int l,i,j,cnt=0; 
	scanf("%s",a);
	l=strlen(a);
    for(i=0;i<l;i++)
    {
    	cnt=0;
    	for(j=i-1;j<l;j++)
    	{
    		if(a[i]==a[j])
    		{
    			 cnt++;
    		 if(cnt>1)
    		 {
    		 	
    		 	a[j]='+';
    		 }
    		}
    	}
    	       if(a[i]!='+')
                   	{
    		printf("%c:%d  ",a[i],cnt);
            	}
    	
    } 	
	return 0;

    	
    
}
