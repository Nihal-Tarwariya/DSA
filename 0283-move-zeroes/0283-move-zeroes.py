class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        j=0
        for idx,val in enumerate(nums):
            if val!=0:
                nums[j],nums[idx] = nums[idx],nums[j]
                j+=1
             