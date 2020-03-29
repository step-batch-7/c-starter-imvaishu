#include <stdio.h>
#include <math.h>

char is_even(int);
char is_odd(int);
long long int square(int);
long long int cube(int);
int gcd(int,int);
int lcm(int,int);
double simple_interest(float,float,float);
double compound_interest(float,float,float);
double fahrenheit_temp_convertor(float);

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

double simple_interest(float principle, float interest_rate, float time_period)
{
  return principle * interest_rate * time_period / 100;
}

double compound_interest(float principle, float interest_rate, float time_period)
{
  double total_amount = principle * pow((1+interest_rate/100),time_period);
  return total_amount - principle;
}

double fahrenheit_temp_convertor(float fahrenheit_temp)
{
  return (fahrenheit_temp - 32) * 5/9;
}

int main(void)
{
  int num ;
  int num1 ;
  int num2 ;
  float principle;
  float interest_rate;
  float time_period;
  float fahrenheit_temp;

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

  printf("Write principle, interest_rate and time_period here to find simple interest :\n");
  scanf("%f %f %f",&principle,&interest_rate,&time_period);
  printf("LCM of given num is %f\n",simple_interest(principle,interest_rate,time_period));

  printf("Write principle, interest_rate and time_period here to find compound interest :\n");
  scanf("%f %f %f",&principle,&interest_rate,&time_period);
  printf("LCM of given num is %f\n",compound_interest(principle,interest_rate,time_period));

  printf("Write fahrenheit temperature to convert into centigrade :\n");
  scanf("%f",&fahrenheit_temp);
  printf("LCM of given num is %f degree celsius\n",fahrenheit_temp_convertor(fahrenheit_temp));
}