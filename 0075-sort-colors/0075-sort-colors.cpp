class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans(3,0);
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        //cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2];
        int j=0;
        for(int i=0;i<ans.size();i++){
            while(ans[i]>0){
                nums[j]=i;
                ans[i]--;
                j++;
            }
        }
    }
};