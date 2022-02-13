#include<stdio.h>
int input_number()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;

}
int is_composite(int n)

{
  int i;
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    return 1;
  }
 return 0;
}

void output(int n, int composite)
{
  if(composite)
  printf("the number is composite number %d \n",n);
  else
  printf("%d is not a composite number\n",n);
}

int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
  
}