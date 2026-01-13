class Solution(object):
    def minOperations(self, nums, k):
        add = sum(nums)
        return add%k
        