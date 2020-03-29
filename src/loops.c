#include <stdio.h>

long long int factorial(long long int);
void fibonacci(int);
void odd_number_series(int);

long long int factorial(long long int num)
{
  long long int result = 1;
  if(num <= 0){
    return result;
  }
 for(long long int term = num ; term > 1 ; term--){
   result = result * term;
 }
  return result;
}

void fibonacci(int range)
{
  int count = range;
  int num1 = 0;
  int num2 = 1;
  int sum_of_previous_terms;
  for(int index = 1 ; index <= count ; index++){
    printf("%d\n",num1);
    sum_of_previous_terms = num1 + num2;
    num1 = num2;
    num2 = sum_of_previous_terms;
  }
}

void odd_number_series(int upto)
{
 for(int count = 0 ; count <= upto ;count++){
   if(count%2 ==! 0){
     printf("%d\n",count);
   }
 }
}

int main(void)
{
  long long int num;

  printf("Write number here for factorial :");
  scanf("%lld",&num);
  printf("Factorial of given number is %lld\n",factorial(num));

  printf("Write range here for factorial :");
  scanf("%lld",&num);
  fibonacci(num);

  printf("Write range here for odd_number_series :");
  scanf("%lld",&num);
  odd_number_series(num);
}