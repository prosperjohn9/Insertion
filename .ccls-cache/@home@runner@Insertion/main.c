#include <stdio.h>
#include <string.h>

int main() {
  int arr[6] = {1, 3, 5, 7, 9};
  int k = 4, item = 8;
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("-------- Array elements before insertion --------\n");
  for (int i = 0; i < size - 1; i++) {
    printf(" Element in array [%d] is: %d\n", i, arr[i]);
  }
  int j = sizeof(arr) / sizeof(arr[0]);

  while (j >= k) {
    arr[j + 1] = arr[j];
    j--;
  }
  arr[k] = item;

  printf("-------- Array elements after insertion --------\n");
  for (int i = 0; i < size; i++) {
    printf(" Element in array [%d] is: %d\n", i, arr[i]);
  }
  return 0;
}