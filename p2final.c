#include<stdio.h>

int input_side()
{
  int a;
  printf("enter a side of triangle\n");
  scanf("%d",&a);
  return a;

}
int check_scalene(int a, int b, int c,int *iss)
{ 
  if(a!=b && b!=c && a!=c)
  *iss=1;
  else 
  *iss=0;

}
void output(int a, int b, int c, int iss)
{
    if(iss==1)
    printf("the triangle is scalene\n");
    else
    printf("the triangle is not scalene\n");

k}









]







int main()
{ 
  
  int x,y,z,iss;
  x=input_side();
  y=input_side();
  z=input_side();
  check_scalene(x,y,z,&iss);
  output(x,y,z,iss);
  return 0;

}