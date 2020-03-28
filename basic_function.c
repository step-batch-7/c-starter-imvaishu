#include <stdio.h>

char isEven(int);
char isOdd(int);

char isEven(int num)
{
  return !(num % 2);
}

char isOdd(int num)
{
  return !isEven(num);
}

int main(void)
{
  int num ;
  printf("Write number here to check whether the num is even or not :");
  scanf("%d",&num);
  printf("%s",isEven(num) ? "number is even\n" : "number is not even\n");

  printf("Write number here to check whether the num is odd or not :");
  scanf("%d",&num);
  printf("%s",isOdd(num) ? "number is odd\n" : "number is not odd\n");
}