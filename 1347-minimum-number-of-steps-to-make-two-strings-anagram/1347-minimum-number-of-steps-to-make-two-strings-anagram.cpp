class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> alp(26,0);
        vector<int> alp1(26,0);
        for(int i=0;i<s.size();i++){
            int a = s[i]-'a';
            int b = t[i]-'a';
            alp[a]++;
            alp1[b]++;
        }
        for(int i=0;i<alp.size();i++){
            cout<<alp[i]<<" "<<alp1[i]<<endl;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(alp1[i]>alp[i]) ans+=(alp1[i]-alp[i]);
        }
        return ans;
    }
};