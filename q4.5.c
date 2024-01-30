#include <stdio.h>
int main()
{
 double a;
 printf("Enter the previous meter reading");
 scanf("%lf",&a);
 double b;
 printf("Enter the current meter reading");
 scanf("%lf",&b);
 double dif;
 dif=b-a;
 if(dif<=100)
 {
  double bill1;
  bill1=(1.40*dif);
  printf("Bill amout: %lf",bill1);
 }
 else if(dif<=200)
 {
  double bill2;
  bill2=140+(2.50*(dif-100));
  printf("Bill amout: %lf",bill2);
 }
 else
 {
  double bill3;
  bill3=390+(3.20*(dif-200));
  printf("Bill amout: %lf",bill3);
 }
 return 0;
}
