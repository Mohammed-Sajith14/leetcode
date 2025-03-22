class Solution(object):
    def countDistinctIntegers(self, nums):
        for i in range(len(nums)):
            s = str(nums[i])
            s = s[::-1]
            nums.append(int(s))
        ss = set(nums)
        return len(ss)
        