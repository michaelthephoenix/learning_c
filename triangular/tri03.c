#include <stdio.h>

void print_function(int n)
{
  for (int i = 0; i <= n; i++)
  {
    printf("*");
  }
  printf("\n");
  
}

int main()
{
  int count = 15;
  print_function(7);
  while (count >= 0)
  {
    print_function(count);
    count--;
  }
  
}