class Solution {
public:
    int findComplement(int num) {
        string a="";
        while(num>0){
            a=to_string(num%2)+a;
            num=num/2;
        }
        
        for(int i=0;i<a.size();i++){
            if(a[i]=='0') a[i]='1';
            else a[i]='0';
        }
        long long n=1,i=a.size()-1,ans=0;
        while(i>=0){
            if(a[i]=='1') ans+=(n);
            n*=2,i--;
        }
        return ans;
    }
};