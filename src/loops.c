#include <stdio.h>

long long int factorial(long long int);
void fibonacci(int);
void odd_number_series(int);
void even_number_series(int);
void multiplication_table(int,int);
unsigned sum_of_n_number(int,int);
unsigned product_of_n_number(int,int);
void odd_number_between_range(int,int);
void seventh_number_between_range(int,int);
void fourth_number_between_range(int,int);
unsigned sum_of_even_numbers_between_range(int,int);

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

void even_number_series(int upto)
{
 for(int count = 0 ; count <= upto ;count++){
   if(count%2 == 0){
     printf("%d\n",count);
   }
 }
}

void multiplication_table(int from,int to)
{
 for(int count = 1 ; count <= to ; count ++){
   int result = from * count;
   printf("%d * %d = %d\n",from,count,result);
 }
}

unsigned sum_of_n_number(int from,int to)
{
  int total = 0;
 for(int count = from ; count <= to ; count++){
   total = total + count;
 }
 return total;
}

unsigned product_of_n_number(int from,int to)
{
  int total = 1;
  for(int count = from ; count <= to ; count++){
   total = total * count;
 }
 return total;
}

void odd_number_between_range(int from,int to)
{
  for(int count = from ; count <= to ;count++){
   if(count%2 ==! 0){
     printf("%d\n",count);
   }
 }
}

void seventh_number_between_range(int from,int to)
{
 int increment = 7;
 for(int count = from ; count <= to ; count+=increment){
   printf("%d\n",count);
 }
}

void fourth_number_between_range(int from,int to)
{
 int increment = 4;
 for(int count = from ; count <= to ; count+=increment){
   printf("%d\n",count);
 }
}

unsigned sum_of_even_numbers_between_range(int from,int to)
{
 unsigned total = 0;
 for(int count = from ; count <= to ;count++){
   if(count%2 == 0){
     total = total+count;
   }
 }
 return total;
}

int main(void)
{
  long long int num;
  int from;
  int to;

  printf("Write number here for factorial :");
  scanf("%lld",&num);
  printf("Factorial of given number is %lld\n",factorial(num));

  printf("Write range here for fibonacci series :");
  scanf("%lld",&num);
  fibonacci(num);

  printf("Write number here for odd_number_series :");
  scanf("%lld",&num);
  odd_number_series(num);

  printf("Write number here for even_number_series :");
  scanf("%lld",&num);
  even_number_series(num);

  printf("Write a range here for multiplication table :\n");
  scanf("%d %d",&from,&to);
  multiplication_table(from,to);

  printf("Write a range here for sum of N number :\n");
  scanf("%d %d",&from,&to);
  printf("sum of given  N number between given range is %u\n",sum_of_n_number(from,to));

  printf("Write a range here for product of N number :\n");
  scanf("%d %d",&from,&to);
  printf("product of given  N number between given range is %u\n",product_of_n_number(from,to));

  printf("Write a range here for odd numbers between range :\n");
  scanf("%d %d",&from,&to);
  odd_number_between_range(from,to);

  printf("Write a range here for every 7th numbers between range :\n");
  scanf("%d %d",&from,&to);
  seventh_number_between_range(from,to);

  printf("Write a range here for every 4th numbers between range :\n");
  scanf("%d %d",&from,&to);
  fourth_number_between_range(from,to);

   printf("Write a range here for sum of even numbers between range :\n");
  scanf("%d %d",&from,&to);
  printf("sum of given even number between given range is %u\n",sum_of_even_numbers_between_range(from,to));
}