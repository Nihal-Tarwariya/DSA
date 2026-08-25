class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int i=1,j=k;
        while(freq[k]!=0){
            i++;
            k=j*i;
            cout<<k<<endl;
        }
        return k;
    }
};