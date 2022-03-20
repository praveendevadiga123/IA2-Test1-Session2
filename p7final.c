#include<stdio.h>

typedef struct _triangle
{
	float base,altitude,area;
}Triangle;

Triangle input_triangle()
{
  Triangle praveen;
  printf("enter a base and altitude\n");
  scanf("%f%f",&praveen.base,&praveen.altitude);
  return praveen;
}
void find_area(Triangle *t)
{
  t->area=0.5 * t->base* t->altitude;
}

void output(Triangle t)
{
  printf("the area of Triangle with base %f and altitude %f is %f\n",t.base,t.altitude,t.area);
}
int main()
{
  Triangle maharshi;
  maharshi=input_triangle();
  find_area(&maharshi);
  output(maharshi);
  return 0;
}