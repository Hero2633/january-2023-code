//int searchInsert(int* nums, int numsSize, int target) {
//    int left = 0;
//    int right = numsSize - 1;
//    int mid = 0;
//    while (left < right)
//    {
//        mid = (right - left) / 2 + left;
//        if (nums[mid] == target)
//            return mid;
//        else if (nums[mid] > target)
//            right = mid - 1;
//        else
//            left = mid + 1;
//    }
//    mid = (right - left) / 2 + left;
//    return nums[mid] >= target ? mid : mid + 1;
//}
//int* runningSum(int* nums, int numsSize, int* returnSize) {
//    int* sum = (int*)calloc(numsSize, sizeof(int));
//    int cur = 1;
//    sum[0] = nums[0];
//    for (cur; cur < numsSize; cur++)
//    {
//        sum[cur] = sum[cur - 1] + nums[cur];
//    }
//    *returnSize = numsSize;
//    return sum;
//}