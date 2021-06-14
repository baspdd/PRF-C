#include<stdio.h>
#include<math.h>

long ktra(long n)
{    long i,n1, check=1;
    if(n<2) check=0;
    else{ 
        n1=sqrt(n);
        for(i=2; i<=n1; i++) 
        if(n%i==0) {check=0; break;}
        }
    return check;}


int main()
{
long n,check;
 scanf("%ld",&n);

printf("%ld",ktra(n)); 
}
