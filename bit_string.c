#include <stdio.h>

int main() { 
int U[10], A[10], B[10]; int a[10], b[10]; int uni[10], inter[10], diff1[10], diff2[10]; 
int n, m, p, i, j;

printf("Enter the size of universal set: ");
scanf("%d", &n);
printf("Enter elements of universal set:\n");
for (i = 0; i < n; i++)
    scanf("%d", &U[i]);

printf("Enter the number of elements in set A: ");
scanf("%d", &m);
printf("Enter elements of set A:\n");
for (i = 0; i < m; i++)
    scanf("%d", &A[i]);

printf("Enter the number of elements in set B: ");
scanf("%d", &p);
printf("Enter elements of set B:\n");
for (i = 0; i < p; i++)
    scanf("%d", &B[i]);


for (i = 0; i < n; i++) {
    a[i] = 0;
    b[i] = 0;

    for (j = 0; j < m; j++) {
        if (U[i] == A[j])
            a[i] = 1;
    }

    for (j = 0; j < p; j++) {
        if (U[i] == B[j])
            b[i] = 1;
    }
}

printf("\nUniversal Set: ");
for (i = 0; i < n; i++)
    printf("%d ", U[i]);

printf("\nBit string of A: ");
for (i = 0; i < n; i++)
    printf("%d", a[i]);

printf("\nBit string of B: ");
for (i = 0; i < n; i++)
    printf("%d", b[i]);

// Set operations
for (i = 0; i < n; i++) {
    uni[i] = a[i] | b[i];
    inter[i] = a[i] & b[i];
    diff1[i] = a[i] & !b[i];
    diff2[i] = b[i] & !a[i];
}

printf("\n\nUnion: ");
for (i = 0; i < n; i++)
    printf("%d", uni[i]);

printf("\nIntersection: ");
for (i = 0; i < n; i++)
    printf("%d", inter[i]);

printf("\nDifference (A - B): ");
for (i = 0; i < n; i++)
    printf("%d", diff1[i]);

printf("\nDifference (B - A): ");
for (i = 0; i < n; i++)
    printf("%d", diff2[i]);

printf("\n");

return 0;
}
