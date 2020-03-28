#include <stdio.h>

char isEven(int);
char isOdd(int);
long long int square(int);
long long int cube(int);

char isEven(int num)
{
  return !(num % 2);
}

char isOdd(int num)
{
  return !isEven(num);
}

long long int square(int num)
{
  return num * num;
}

long long int cube(int num)
{
  return square(num) * num;
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

  printf("Write number here to find square of number :");
  scanf("%d",&num);
  printf("square of given num is %lld\n",square(num));

  printf("Write number here to find cube of number :");
  scanf("%d",&num);
  printf("cube of given num is %lld\n",cube(num));
}