#include <stdio.h>
#include <string.h>

int main() {
  int arr[] = {1, 3, 5, 7, 9};
  int k = 4, item = 8;

  printf("-------- Array elements before insertion --------\n");
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    printf(" Element in arr [%d] is: %d\n", i, arr[i]);
  }
  int j = sizeof(arr)/sizeof(arr[0]);
  
  while (j >= k) {
    arr[j+1] = arr[j];
    j--;
  }
  arr[k] = item;

  printf("-------- Array elements after insertion --------\n");
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) + 1; i++){
    printf(" Element in arr [%d] is: %d\n", i, arr[i]);
  }
  return 0;
}