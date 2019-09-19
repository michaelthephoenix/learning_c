#include<stdio.h>

int main()
{
  int n;
  int i = 2;
  printf("Please enter a number: ");
  scanf("%d", &n);
  printf("prime factorization of %d: ", n);
  while (n != 1)
  // while number_entered is not eqaul 1
  {
    if (n % i == 0)
    {
      while (n % i == 0)
      // if the remainder of number_entered and prime_number(i) == 0
      {
        // print i
        printf("%d", i);
        printf("*");
        
        // divide number_entered by i and let the result be new number_enter(n)
        n = n / i;
      }
      
    }
    // if the remainder of number_entered and prime_number(i) += 0 add 1 to i and repeat
    i++;
  }
  return 0;
}