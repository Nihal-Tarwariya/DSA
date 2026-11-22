class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k=k%n
        a1 = nums[:n-k]
        a2 = nums[n-k:]
        nums[:]=a2+a1
        