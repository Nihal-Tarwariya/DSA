class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int me=INT_MIN;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            me=max(me,nums[i]); 
            int a = gcd(me,nums[i]);
            ans.push_back(a);
        }
        sort(ans.begin(),ans.end());
        long long sum=0,n=ans.size();
        for(int i=0;i<ans.size()/2;i++){
            sum+=gcd(ans[i],ans[n-1-i]);
        }
        return sum;
    }
};