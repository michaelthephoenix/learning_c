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

void combo()
{
  int count = 15;
  for (int i = 0; i < count; i++)
  {
    print_space(i);
    print_star(count - i);
    printf("\n");
  }
  
}

int main(void)
{
  combo(); 
}
