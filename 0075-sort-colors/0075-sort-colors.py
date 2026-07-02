class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        a=[0,0,0]
        for i in range(len(nums)):
            a[nums[i]]+=1

        print(a[0],a[1],a[2])
        j=0
        for i in range(3):
            while a[i] > 0:
                nums[j] = i
                j+=1
                a[i]-=1    