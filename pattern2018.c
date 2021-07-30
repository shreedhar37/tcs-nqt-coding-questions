/*

Question Source Credits: Prepinsta

TCS NQT Coding Question
1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17, ……..

This series is a mixture of 2 series:
1. All the odd terms in this series form a Fibonacci series and
2. All the even terms are the prime numbers in ascending order.

Write a program to find the Nth term in this series.

    The value N is a Positive integer that should be read from STDIN.
    The Nth term that is calculated by the program should be written to STDOUT.
    Other than the value of Nth term, no other characters/strings or message should be written to STDOUT.

For example, when N = 14, the 14th term in the series is 17. So only the value 17 should be printed to STDOUT.

Case 1

    Input: 14
    Expected Output: 17

Case 1

    Input: 5
    Expected Output: 2

*/

// Solution:

#include <stdio.h>
#define max 9999

void fibo(int n)
{
  int a = 0, b = 1, next, i, c = 0;

  for (i = 1; i <= n; i++)
  {
    next = a + b;
    a = b;
    b = next;
  }

  printf("%d", a);
}

void prime(int n)
{
  int i, j, c = 0, flag;

  for (i = 2; i < max; i++)
  {
    flag = 0;

    for (j = 2; j < i; j++)
    {
      if (i % j == 0) //  means number is not prime number.
      {
        flag = 1;
        break;
      }
    }

    if (flag == 0) // means number is prime number.
      c++;

    if (c == n / 2) // to check that  Nth prime number  is found or not.
    {
      printf("%d", i);
      break;
    }
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  if (n % 2 != 0)
    fibo((n / 2) + 1);
  else
    prime(n);
  return 0;
}
