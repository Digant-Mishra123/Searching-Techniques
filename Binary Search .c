#include <stdio.h>
int main()
{
  int i, low, high, flag=0,mid, n, key, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter the integers\n");

  for (c = 0; c < n; c++)
  {
    scanf("%d", &array[i]);
  }

  printf("Enter value to find\n");
  scanf("%d", &key);

  low = 0;
  high = n - 1;
  mid = (low+high)/2;

  while (low <= high) 
  {
    mid = (low + high)/2;
    if (array[mid] == key)
    {
      printf("%d found at location %d.\n", key, mid+1);
      flag=1;
      break;
    }
    else if (array[mid]<key)
    {
      low=mid+1;
    }
    else
    {
      high = mid - 1;
    }
  }
  if (flag==0)
  {
    printf("Not found! %d isn't present in the list.\n", key);
  }
}
