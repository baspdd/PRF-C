/*#include<stdio.h>
#include<string.h>

int main() {
   int a,b,c,d,w,i,j,m,n,s=0;
   scanf("%ld%ld%ld%ld%ld", &a,&b,&c,&d,&w);
   for (i=0;i<=w/i;i++)
     for (j=0;j<=w/j;j++)
      for (m=0;m<=w/m;m++)
       for (n=0;n<=w/n;n++)
       {if (a*i+b*j+c*m+d*n==w) s++;
       
	   }
	   printf("%lld",s);
    
    return 0;}*/

#include<stdio.h>
#include<string.h>

int main() {
   int a,b,c,d,w,i,j,m,n,s=0;
   scanf("%ld%ld%ld%ld%ld", &a,&b,&c,&d,&w);
   for (i=0;i<=w;i++)
   {for (j=0;j<=w;j++)
   {for (m=0;m<=w;m++)
   {for (n=0;n<=w;n++)
       {if (a*i+b*j+c*m+d*n==w) s++;
       
	   }}}}
	   printf("%lld",s);
    
    return 0;}
