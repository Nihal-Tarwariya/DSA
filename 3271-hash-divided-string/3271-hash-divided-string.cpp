class Solution {
public:
    string stringHash(string s, int k) {
        int sum=0,count=0;
        string result="";
        for(int i=0;i<s.size();i++){
            sum+=s[i]-'a';
            count++;
            if(count==k){
                char a = (char)('a'+sum%26);
                count=0;
                sum=0;
                result+=a;
            }
        }   
        return result;
    }
};