#include<stdio.h>
void main()
{
 int a;
 printf("Enter the weekday no.");
 scanf("%d",&a);
 switch(a)
 {
  case 0:
  printf("Sunday");
  break;
  case 1:
  printf("Monday");
  break;
  case 2:
  printf("Tuesday");
  break;
  case 3:
  printf("Wednesday");
  break;
  case 4:
  printf("Thursday");
  break;
  case 5:
  printf("Friday");
  break;
  case 6:
  printf("Saturday");
  break;
 }
} 

