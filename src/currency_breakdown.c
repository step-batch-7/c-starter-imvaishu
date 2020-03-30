#include <stdio.h>

void print_currency_breakdown(unsigned long);


void print_currency_breakdown(unsigned long money)
{
  unsigned long total_amount = money;
  unsigned denomination;
  unsigned notes_count;

  denomination = 2000;
  notes_count = total_amount / denomination;
  if(notes_count){
    printf("%u X Rs %u\n",notes_count,denomination);
  }
  total_amount = total_amount - notes_count * denomination;

  denomination = 1000;
  notes_count = total_amount / denomination;
  if(notes_count){
    printf("%u X Rs %u\n",notes_count,denomination);
  }
  total_amount = total_amount - notes_count * denomination;

  denomination = 500;
  notes_count = total_amount / denomination;
  if(notes_count){
    printf("%u X Rs %u\n",notes_count,denomination);
  }
  total_amount = total_amount - notes_count * denomination;

  denomination = 200;
  notes_count = total_amount / denomination;
  if(notes_count){
    printf("%u X Rs %u\n",notes_count,denomination);
  }
  total_amount = total_amount - notes_count * denomination;

 denomination = 100;
  notes_count = total_amount / denomination;
  if(notes_count){
    printf("%u X Rs %u\n",notes_count,denomination);
  }
  total_amount = total_amount - notes_count * denomination;

  denomination = 50;
  notes_count = total_amount / denomination;
  if(notes_count){
    printf("%u X Rs %u\n",notes_count,denomination);
  }
  total_amount = total_amount - notes_count * denomination;

  denomination = 10;
  notes_count = total_amount / denomination;
  if(notes_count){
    printf("%u X Rs %u\n",notes_count,denomination);
  }
  total_amount = total_amount - notes_count * denomination;

  denomination = 5;
  notes_count = total_amount / denomination;
  if(notes_count){
    printf("%u X Rs %u\n",notes_count,denomination);
  }
  total_amount = total_amount - notes_count * denomination;

  denomination = 1;
  notes_count = total_amount / denomination;
  if(notes_count){
    printf("%u X Rs %u\n",notes_count,denomination);
  }
  total_amount = total_amount - notes_count * denomination;
}

int main(void){
  unsigned long money;

  printf("Enter your amount here :\n");
  scanf("%lu",&money);
  print_currency_breakdown(money);
}