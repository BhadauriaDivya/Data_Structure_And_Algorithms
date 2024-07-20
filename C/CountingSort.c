#include<stdio.h>

void countingSort(int array[], int size) {
  int max = array[0];
  int count[100];
  int output[100];

  for (int i = 1; i < size; i++) {
    if (array[i] > max){
      max = array[i];
    }
  }

  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
  
}

int main() {
  int array[] = {4, 2, 2, 8, 3, 3, 1,3,5,5,2,8,4,7};
  int n = sizeof(array) / sizeof(array[0]);

  countingSort(array, n);

  for (int i = 0; i < n; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}