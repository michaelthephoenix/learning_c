#include <stdio.h>
#include <string.h>

char compareCharacters(char a,char b){
	if(a==b)
		return 0;
	else
		return -1;
}

int main()
{
  int first_number, second_number, result;
  char operation ,answer;
  char addition = '+', subtraction = '-', multiplication = '*', division = '/';

  do
  {
    
  printf(" For operation you wish to perform \n Enter \n");
  scanf("%d%c%d", &first_number, &operation, &second_number);
  if (compareCharacters(operation, addition) == 0)
  {
    result = first_number + second_number;
    printf("= %d", result);
  }
  else if (compareCharacters(operation, subtraction) == 0)
  {
    result = first_number - second_number;
    printf("= %d", result);
  }
  else if (compareCharacters(operation, multiplication) == 0)
  {
    result = first_number * second_number;
    printf("= %d", result);
  }
  else if (compareCharacters(operation, division) == 0)
  {
    result = first_number / second_number;
    printf("= %d", result);
  }
  else
  {
    printf("invalid input");
  }
  
  printf("if u would like to continue y/n \n");
  scanf("%c", &answer);

  } while (compareCharacters(answer, 'y') == 0);
  
  
  
  return 0;
}