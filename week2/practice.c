#include <stdio.h>



// This is a code to check whether a geometric shape is a triangle, after getting the size of the 3 lengths from the user.


float valid_triangle(float a, float b, float c);

int main(void)
{
  
}
bool valid_triangle(float a, float b, float c)
{
  // if(a < 1 || b < 1 || c < 1)
     {
        return false;
      }
     if(a + b <= c || a + c <= b ||  b + c <= a)
     {
       return false;
      }
    return true;
}
