#include <stdio.h>

char isEven(int num)
{
  return !(num % 2);
}

int main(void)
{
  int num ;
  printf("Write number here to check whether the num is even or not :");
  scanf("%d",&num);
  printf("%s",isEven(num) ? "number is even\n" : "number is not even\n");
}