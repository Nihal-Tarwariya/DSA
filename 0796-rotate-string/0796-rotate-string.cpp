class Solution {
public:
    bool rotateString(string s, string goal) {
        string a=s;
        if(s==goal) return true;
        for(int i=0;i<s.size();i++){
            if(s==goal) return true;
            else{
                char temp = s[0];
                s.erase(0, 1); 
                s+=temp;
            }
        }
        return false;
    }
};