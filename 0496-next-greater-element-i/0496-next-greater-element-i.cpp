class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> ans;
        ans.push(-1);
        unordered_map<int,int> freq;
        for(int i=nums2.size()-1;i>=0;i--){
            
            while(ans.top()<nums2[i]&&ans.top()!=-1){
                ans.pop();
            }
            if(ans.top()==-1||ans.top()>nums2[i]){
                freq[nums2[i]]=ans.top();
            }
            ans.push(nums2[i]);
            
        }
        for(int i=0;i<nums1.size();i++){
            nums1[i]=freq[nums1[i]];
        }
        return nums1;
    }
};