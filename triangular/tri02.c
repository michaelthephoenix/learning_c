// printing a triangle
#include <stdio.h>

void print_space(int number_of_spaces)
{
  for (int i = 0; i < number_of_spaces; i++)
  {
    printf(" ");
  }
}

void print_star(int number_of_stars)
{
  for (int i = 0; i < number_of_stars; i++)
  {
    printf("*");
  }
  
}

void pyramid()
{
  for (int n = 1, m = 4; n <= 9, m > 0 ; n = n + 2, m--)
  {
    print_space(m);
    print_star(n);
    printf("\n"); 
  }
  
}

int main()
{
  pyramid();
}