#include <stdio.h>
#include <limits.h>
#include <math.h>  // Required for fmax and fmin

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    // Ensure nums1 is the smaller array
    if (nums1Size > nums2Size) {
        return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);
    }

    int x = nums1Size, y = nums2Size;
    int low = 0, high = x;

    while (low <= high) {
        int partitionX = (low + high) / 2;
        int partitionY = (x + y + 1) / 2 - partitionX;

        // Edge cases for out-of-bounds indices
        int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int minRightX = (partitionX == x) ? INT_MAX : nums1[partitionX];

        int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        int minRightY = (partitionY == y) ? INT_MAX : nums2[partitionY];

        // Correct partition found
        if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
            if ((x + y) % 2 == 0) {
                return (fmax(maxLeftX, maxLeftY) + fmin(minRightX, minRightY)) / 2.0;
            } else {
                return fmax(maxLeftX, maxLeftY);
            }
        } 
        // Shift left in nums1
        else if (maxLeftX > minRightY) {
            high = partitionX - 1;
        } 
        // Shift right in nums1
        else {
            low = partitionX + 1;
        }
    }

    return -1;  // Should never reach here
}
