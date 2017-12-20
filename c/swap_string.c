#include <stdio.h>
#include<string.h>
int main(void)
{
   int i,n;
   char s[20];
   scanf("%s",&s);
   n=strlen(s);
   for(i=0;i<n;i++)
   {
   	 char temp;
   	 temp=s[i];
   	 s[i]=s[i+1];
   	 s[i+1]=temp;
   	 i++;
   }
   printf("%s",s);

   return 0;
}
