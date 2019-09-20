#include <stdio.h>

int main()
{
  int mark;
  printf("please enter the mark: ");
  scanf("%d", &mark);
  if (mark >= 50 && mark <= 59)
  {
    printf("D");
  }
  if (mark >= 60 && mark <= 69)
  {
    printf("C");
  }
  if (mark >= 70 && mark <= 79)
  {
    printf("B");
  }
  if (mark >= 80 && mark <= 100)
  {
    printf("A");
  }
  if (mark < 50 || mark > 100)
  {
    printf("the entered mark is invalid");
  }
  
  
}