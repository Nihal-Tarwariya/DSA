class Solution:
    def maxFrequency(self, nums: list[int], k: int) -> int:
        i,c,ans,k1=0,1,1,0
        nums.sort()
        for idx,curelem in enumerate(nums[1:],start=1):
            k1 += (curelem - nums[idx-1])*(idx-i)
            c+=1
            print(idx,k1,c)
            while k1>k:
                k1=k1-(curelem-nums[i])
                i+=1
                c-=1
            ans=max(c,ans)
        return ans