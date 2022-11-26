#include <stdio.h>

int main(void)
{
  int arr[] = {7,2,4,5,3,6,1}, n = 7;
  
  for (int i = 0 ; i< n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }

    }
    for (int t = 0; t < 7; t++){
        printf("%d ", arr[t]);
    }

}
