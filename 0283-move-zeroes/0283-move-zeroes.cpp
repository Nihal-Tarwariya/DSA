class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=1;
        while(i<=nums.size()-1&&j<=nums.size()-1){
            if(j<i){
                j++;
                continue;
            }
            if(nums[i]==0&&nums[j]!=0) swap(nums[i],nums[j]);
            if(nums[i]!=0) i++;
            if(nums[j]==0) j++;
            
        }
    }
};