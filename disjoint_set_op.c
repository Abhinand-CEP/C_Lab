#include <stdio.h>

int main() { 
int A[10], B[10], uni[20], inter[10]; int diff1[10], diff2[10]; 
int n, m, i, k = 0;

printf("Enter number of elements in set A: ");
scanf("%d", &n);
printf("Enter elements of set A:\n");
for (i = 0; i < n; i++)
    scanf("%d", &A[i]);

printf("Enter number of elements in set B: ");
scanf("%d", &m);
printf("Enter elements of set B:\n");
for (i = 0; i < m; i++)
    scanf("%d", &B[i]);

// Union
for (i = 0; i < n; i++)
    uni[k++] = A[i];

for (i = 0; i < m; i++)
    uni[k++] = B[i];

// Intersection of disjoint sets is empty
// A - B = A
for (i = 0; i < n; i++)
    diff1[i] = A[i];

// B - A = B
for (i = 0; i < m; i++)
    diff2[i] = B[i];

printf("\nUnion: ");
for (i = 0; i < k; i++)
    printf("%d ", uni[i]);

printf("\nIntersection: Empty Set");

printf("\nDifference (A-B): ");
for (i = 0; i < n; i++)
    printf("%d ", diff1[i]);

printf("\nDifference (B-A): ");
for (i = 0; i < m; i++)
    printf("%d ", diff2[i]);

printf("\n");

return 0;
}
