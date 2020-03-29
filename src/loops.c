#include <stdio.h>

unsigned factorial(unsigned);

unsigned factorial(unsigned num)
{
  return num <= 0 ? 1 : num * factorial(num - 1);
}

int main(void)
{
  unsigned num;

  printf("Write number here for factorial :");
  scanf("%d",&num);
  printf("Factorial of given number is %u\n",factorial(num));
}