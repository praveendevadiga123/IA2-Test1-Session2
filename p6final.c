
#include<stdio.h>


void input_string(char *a)
{
  printf("enter a string\n");
  scanf("%s",a);
}

char str_reverse(char *x,char *reverse)
{
    int n,i;
 for(n=0;x[n];n++);
 
 for(i=0;x[i];i++)
 {
   reverse[i]=x[n];
   n--;
 }
 reverse[i]= '\0';
}
void output(char *a,char *reverse_a)
{
  printf("%s is %s\n",a,reverse_a);
}
int main()
{
  char x[15];
  input_string(x);
  char rvrs[15];
  str_reverse(x,rvrs);
  output(x,rvrs);
  return 0;
}

