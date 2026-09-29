#include <stdio.h>
void bubbleSort(int arr[], int n)
{
 int i, j, temp;
for (i = 0; i < n - 1; i++)
{
  for (j = 0; j < n - i - 1; j++)
  {
   if (arr[j] > arr[j + 1])
    {
     temp = arr[j];
     arr[j] = arr[j + 1];
     arr[j + 1] = temp;
     }
    }
 }
}

int binarySearch(int arr[], int n, int key)
{
int low = 0;
int high = n - 1;
while (low <= high)
 {
  int mid = (low + high) / 2;
   if (arr[mid] == key)
    {
     return mid;
     }
   else if (arr[mid] < key)
     {
      low = mid + 1;
      }
    else
      {
       high = mid - 1;
      }
  }
    return -1;
}

void display(int arr[], int n)
{
int i;
for (i = 0; i < n; i++)
 {
  printf("%d ", arr[i]);
 }
 printf("\n");
}

void main()
{
int n, key, result;
int i;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements:\n");
for (i = 0; i < n; i++)
 {
  scanf("%d", &arr[i]);
  }
printf("the array is: ");
display(arr, n);

bubbleSort(arr, n);
printf("Sorted array is : ");
display(arr, n);

printf("Enter the element to search: ");
scanf("%d", &key);
result = binarySearch(arr, n, key);
if (result != -1)
{
 printf("Element found at index %d \n", result);
 }
else
{
 printf("Element not found\n");
 }
}


