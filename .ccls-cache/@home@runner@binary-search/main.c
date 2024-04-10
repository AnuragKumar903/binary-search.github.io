#include <stdio.h>
#include<stdbool.h>

bool binary_search(int arr[], int n, int target){
  int start = 0;
  int end = n-1;
  while(start <= end){
    int mid = start + (end - start) / 2;
    if(arr[mid] == target){
      return true;
    }
    if(arr[mid] < target){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }
  return false;
}

int main(void) {
  int arr[10] = {2,3,4,5,6,12,23,34,45,56};
  int target;
  scanf("%d", &target);
  bool ans = binary_search(arr, 10, target);
  printf("The target is present: %d", ans);
  return 0;
}