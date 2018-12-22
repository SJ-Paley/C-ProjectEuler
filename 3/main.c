#include <stdio.h>

long largestPrime(long number);
long static divisor = 2;
long static factor = 0;

int main()
{
  long number;

  printf("Enter a number: ");
  scanf("%ld", &number);
  printf("The largest prime of %ld is %ld\n", number, largestPrime(number));
  getchar();
  return 0;
}

long largestPrime(long number)
{
  //Algorthim from following link implemented:
  //https://math.stackexchange.com/questions/389675/largest-prime-factor-of-600851475143

  factor = number;

  if (factor < divisor)
  {
    return -1;
  }
  else if(factor == divisor)
  {
    //done, exit
  }
  else if(factor % divisor == 0)
  {
    factor = factor / divisor;
    divisor = 2;
    largestPrime(factor);
  }
  else {
    divisor++;
    largestPrime(factor);
  }

  return factor;
}
