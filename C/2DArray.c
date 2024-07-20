// To implement addition and multiplication of 2D arrays

#include <stdio.h>

void add(int r,int c,int a[100][100], int b[100][100],int sum[100][100]){
    // adding two matrices
    int i,j ;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    } 
}

void multiply(int r,int c,int a[100][100], int b[100][100],int mul[100][100]){
int i,j,k;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      for(k=0;k<r;k++){
      mul[i][j] += a[i][k] * b[k][j];
    }}
}

int main() {
  int r, c, a[100][100], b[100][100], sum[100][100],mul[100][100], i, j;
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &c);


  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }


 add(r,c, a, b, sum);
 multiply(r,c, a, b,mul);

  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
   printf("\nSum of two matrices: \n");
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }
    
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
       printf("\nMul of two matrices: \n");
      printf("%d   ", mul[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }
  

  return 0;
}