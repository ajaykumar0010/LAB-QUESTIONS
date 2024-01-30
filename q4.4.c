#include <stdio.h>
int main()
{
 int a,b,c;
 printf("Enter the marks obtained in Physics,Chemistry and Mathematics:");
 scanf("%d%d%d",&a,&b,&c);
 int or;
 or=a+b;
 int total;
 total=a+b+c;
 if(a>=65 && b>=55 && c>=50 && total>=190)
 {
  printf("The candidate is eligible for admission");
 }
 else if(or>=140)
 {
  printf("The candidate is eligible for admission");
 }
 else
 {
  printf("The candidate is not eligible for admission");
 }
 return 0;
}
