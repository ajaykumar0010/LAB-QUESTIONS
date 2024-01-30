#include <stdio.h>
int main()
{
 char a;
 printf("Enter a number:");
 scanf("%c",&a);
 if (a=='a'||a=='b'||a=='c'||a=='d'||a=='e'||a=='f'||a=='g'||a=='h'||a=='i'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='o'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='u'||a=='v'||a=='w'||a=='x'||a=='y'||a=='z')
 {
  if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
  {
   printf("The entered character '%c'is a vowel",a);
  }
  else 
  {
   printf("The entered character '%c' is a consonent",a);
  }
 }
 else
 {
  printf("The entered character '%c' is not an alphabet",a);
 }
 return 0;
}
 
  
