class Solution(object):
    def findNonMinOrMax(self, nums):
        min = 101
        max = 0
        for i in range(len(nums)):
            if nums[i]>max:
                max = nums[i]
            if nums[i]<min:
                min = nums[i]
        for i in range(len(nums)):
            if nums[i]!=min and nums[i]!=max:
                return nums[i]
        return -1