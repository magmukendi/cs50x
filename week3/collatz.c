 ///The collatz conjecture stipulates that every positive integer shouuld always get back to one.
   
   
///Steps to follow:
  ///- if n = 1 sop
  ///- if n is even, repeat the process n/2
    /// if n is pdd, repeat the process 3n+1



#include <stdio.h>

int collatz(int n)

int main(void)
{
  int n = 3;
  collatz(n);
}

int collatz(int n)
{
  if (n == 1)
  {
    return 0;
  }
  
  else if ( n % 2 ==0)
  {
    return 1 + collatz(n/2);
  }
  else
  {
    return 1 + collatz(3n + 1);
  }
}
