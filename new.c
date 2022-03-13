#include <stdio.h>
int main() {
int row, coll, A[100][100], B[100][100], sum[100][100], i,j;
printf("Enter the number of rows =	"); scanf("%d", &row);
printf("Enter the number of columns = "); scanf("%d", &coll);

printf("\nEnter elements of 1st matrix:\n"); for (i = 0; i < row; ++i)
for (j = 0; j < coll; ++j) {
printf("Enter element a[%d][%d] = ", i + 1, j + 1);
scanf("%d", &A[i][j]);
}
printf("Enter elements of 2nd matrix:\n"); for (i = 0; i < row; ++i)
for (j = 0; j < coll; ++j) {
printf("Enter element a[%d][%d] = ", i + 1, j + 1);
scanf("%d", &B[i][j]);
}
for (i = 0; i < row; ++i)
for (j = 0; j < coll; ++j) { sum[i][j] = A[i][j] + B[i][j];
}
printf("\nSum of two matrices => \n"); for (i = 0; i < row; ++i)
for (j = 0; j < coll; ++j) { printf("%d\t", sum[i][j]); if (j == coll - 1) {
printf("\n\n");
}
}
return 0;
}
 
