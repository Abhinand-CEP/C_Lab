#include <stdio.h>
int lSearch(int arr[], int n, int key)
{
for (int i = 0; i < n; i++)
{
 if (arr[i] == key)
  {
   return i;
   }
}
return -1;
}

void main()
{
 int n, key, result;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter  elements:\n");
for (int i = 0; i < n; i++)
 {
  scanf("%d", &arr[i]);
  }
printf("Enter the element to search: ");
scanf("%d", &key);
result = lSearch(arr, n, key);
if (result != -1)
{
  printf("Element found at position %d\n", result + 1);
}
else
  {
  printf("Element not found\n");
  }
}
