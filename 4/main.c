#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

long calcLargestPalindrome();
bool isPalindrome(long value);
long reverse(long value);

int main()
{
	long largestPalindrome = calcLargestPalindrome();

  printf("Largest Palindrome = %ld\n", largestPalindrome);

	getchar();
	return 0;
}

long calcLargestPalindrome()
{
  long largestPalindrome = 0;

	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			long temp = (long) i * j;
			if (isPalindrome(temp) && temp > largestPalindrome)
      {
        largestPalindrome = temp;
      }
    }
  }

  return largestPalindrome;
}

bool isPalindrome(long value)
{
  return value == reverse(value);
}

long reverse(long value)
{
  long temp = 0;

  while (value != 0)
  {
    temp = temp * 10; // shift numbers to left
    temp = temp + value % 10; //get digit in 1's location and add to current value
    value = value/10; //shift value to right
  }

  return temp;
}
