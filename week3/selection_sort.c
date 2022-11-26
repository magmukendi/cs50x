#include <stdio.h>
// This is the implementation of the selection sort algorithm.
int main(void)
{
  int arr[] = {5,4,3,2,1,0}, n = 6;
  
  for (int i = 0; i < n; i++)
    {
        int pos = arr[i];
        int si = i;

        for( int j = i; j < n; j++)
        {
            if(arr[si] > arr[j])
            {
                si = j;
            }
        }
        arr[i] = arr[si];
        arr[si] = pos;
    }

    for(int t = 0; t < n; t++)
    {
        printf("%d ", arr[t]);
    }
}
