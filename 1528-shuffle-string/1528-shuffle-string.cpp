class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        unordered_map<int,char> freq;
        for(int i=0;i<indices.size();i++){
            freq[indices[i]]=s[i];
        }
        sort(indices.begin(),indices.end());
        string a="";
        for(int i=0;i<indices.size();i++){
            a+=freq[indices[i]];
        }
        return a;
    }
};