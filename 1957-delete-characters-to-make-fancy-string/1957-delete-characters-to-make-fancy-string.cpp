class Solution {
public:
    string makeFancyString(string s) {
        int count=0;
        char ch=s[0];
        string a="";
        for(int i=0;i<=s.size();i++){
            if(ch==s[i]){
                count++;
                //cout<<i<<" ";
            }else if(count>2){
                if(a.empty()) a.insert(0,2,ch);
                else a.insert(a.size(),2,ch);
                ch=s[i];
                count=1;
                //cout<<i<<" ";
            }else{
                 if(a.empty()) a.insert(0,count,ch);
                else a.insert(a.size(),count,ch);
                ch=s[i];
                count=1;
                cout<<i<<" ";
            }
        }
        return a;
    }
};