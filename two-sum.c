#include <stdio.h>
#include <stdlib.h>


int outer(int *nums, int numsSize, int target, int *returnSize) {
  if(numsSize < 4) {
    return 2;
  }
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize) { 
  if(numsSize < 4) {
    outer(nums, numsSize, target, returnSize);
    twoSum(nums, numsSize, target, returnSize);
  }
  *returnSize = 0;
}

int main() {
  int nums[] = {2, 7, 11, 15};
  int target = 9;
  int i, j;
  // for(i = 0; i < 4; i++) {
  //     for(j = i + 1; j < 4; j++) {
  //         if(nums[i] + nums[j] == target) {
  //             printf("[%d, %d]\n", i, j);
  //             return 0;
  //         }
  //     }
  // }
  twoSum(nums, 4, target, 0); 
  return 0;
}
