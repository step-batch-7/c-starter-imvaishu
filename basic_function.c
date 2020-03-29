#include <stdio.h>

char is_even(int);
char is_odd(int);
long long int square(int);
long long int cube(int);
int gcd(int,int);
int lcm(int,int);
unsigned simple_interest(unsigned,unsigned,unsigned);

char is_even(int num)
{
  return !(num % 2);
}

char is_odd(int num)
{
  return !is_even(num);
}

long long int square(int num)
{
  return num * num;
}

long long int cube(int num)
{
  return square(num) * num;
}

int gcd(int num1,int num2)
{
 int reminder = num1;
 if(num2 > num1){
   num1 = num2;
   num2 = reminder;
 }
 while(num2 != 0){
   reminder = num2;
   num2 = num1 % num2;
   num1 = reminder;
 }
 return reminder;
}

int lcm(int num1,int num2)
{
  return num1 * num2 / gcd(num1,num2);
}

unsigned simple_interest(unsigned deposit, unsigned interest, unsigned time)
{
  return deposit * interest * time / 100;
}

int main(void)
{
  int num ;
  int num1 ;
  int num2 ;
  int deposit;
  int interest;
  int time;

  printf("Write number here to check whether the num is even or not :");
  scanf("%d",&num);
  printf("%s",is_even(num) ? "number is even\n" : "number is not even\n");

  printf("Write number here to check whether the num is odd or not :");
  scanf("%d",&num);
  printf("%s",is_odd(num) ? "number is odd\n" : "number is not odd\n");

  printf("Write number here to find square of number :");
  scanf("%d",&num);
  printf("square of given num is %lld\n",square(num));

  printf("Write number here to find cube of number :");
  scanf("%d",&num);
  printf("cube of given num is %lld\n",cube(num));

  printf("Write two numbers here to find GCD of number :\n");
  scanf("%d %d",&num1,&num2);
  printf("GCD of given num is %d\n",gcd(num1,num2));

  printf("Write two numbers here to find LCM of number :\n");
  scanf("%d %d",&num1,&num2);
  printf("LCM of given num is %d\n",lcm(num1,num2));

  printf("Write deposit,rate of interest and time here to find simple interest :\n");
  scanf("%d %d %d",&deposit,&interest,&time);
  printf("LCM of given num is %d\n",simple_interest(deposit,interest,time));
}