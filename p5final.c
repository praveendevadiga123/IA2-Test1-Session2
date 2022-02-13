#include<stdio.h>

int input()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    return a;
}

int gcd(int a, int b)
{
   int min,gcd;
   int i;
   min = (a<b)?a:b;
 
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd = i;
        }
    }
   return gcd;
   
}
void output(int a,int b,int gcd)
{
     printf("G.C.D of %d and %d is %d", a, b,gcd);
}

int main()
{
    int x,y,hcf;
    x=input();
    y=input();
    hcf=gcd(x,y);
    output(x,y,hcf);
    return 0;
    
}