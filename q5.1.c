#include <stdio.h>
void main()
{
 int a,b,c;
 printf("Enter 3 sides of triangle:");
 scanf("%d%d%d",&a,&b,&c);
 if(!(a+b)>c &&(b+c)>a)
 {
  printf("The triangle is equilateral");
 }
 else
 {
  printf("The triangle is not equilateral");
 }
}
 
 
 
