#include <stdio.h>

int main()
{
  int operation, first_number, second_number, result;
  printf(" For operation you wish to perform (-,+,/,*)\n Enter \n");
  scanf("%c", &operation);
  printf("please enter first number\n");
  scanf("%d", &first_number);
  printf("enter second number..\n");
  scanf("%d", &second_number);

  switch (operation)
  {
  case '+':
    result = first_number + second_number;
    printf("= %d", result);
    break;
  case '-':
    result = first_number - second_number;
    printf("= %d", result);
    break;
  case 3:
    result = first_number * second_number;
    printf("= %d", result);
    break;
  case 4:
    result = first_number / second_number;
    printf("= %d", result);
    break;
  
  default:
    printf("invalid input");
    break;
  }
}