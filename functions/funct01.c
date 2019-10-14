#include <stdio.h>


int number;

int square(int number);

int main(void)
{
  printf("Enter a number: %d", number);
  scanf("%d ", &number);
  square(number);
}

int square(int number)
{
  int result = number * number;
  printf("%d ", result);
}