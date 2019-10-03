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
  for (int i = 0; i < count; i++)
  {
    print_function(i);
  } 
}
