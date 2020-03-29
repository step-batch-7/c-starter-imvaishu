#include <stdio.h>

int factorial(int);

int factorial(int num)
{
  int result = 1;
  if(num <= 0){
    return result;
  }
 for(int term = num ; term > 1 ; term--){
   result = result * term;
 }
  return result;
}

int main(void)
{
  int num;

  printf("Write number here for factorial :");
  scanf("%d",&num);

  printf("Factorial of given number is %d\n",factorial(num));
}