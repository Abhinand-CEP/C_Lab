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
bubbleSort(arr, n);
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
int i, choice;
int arr[n];
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter  elements:\n");
for (int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
do
  {
    printf("\n----- MENU -----\n");
    printf("1. Linear Search\n");
    printf("2. Display\n");
    printf("3. Bubble Sort\n");
    printf("4. Binary Search\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

   switch (choice)
    {
    case 1:
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
              break;

      case 2:
                printf("the array is: ");
                display(arr, n);
                break;

       case 3:
                bubbleSort(arr, n);
                printf("Sorted array is : ");
                display(arr, n);
                break;

       case 4:
                printf("Enter the element to search: ");
                scanf("%d", &key);
                result = binarySearch(arr, n, key);
                printf("Sorted array is : ");
                display(arr, n);
                if (result != -1)
                {
                 printf("Element found at index %d \n", result);
                }
                else
                {
                 printf("Element not found\n");
                }
                break;

         case 5:
                printf("Exiting...\n");
                break;

         default:
                printf("Invalid choice\n");
        }
        int opt;
        printf("Do you want to continue(Y/N): ");
        scanf("%c",&opt);

    } while (opt== 'Y' || opt=='y');
}

