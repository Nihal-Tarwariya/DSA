class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        string a=to_string(n);
        string b="";

        for(int i=0;i<a.size();i++){
            if(a[i]!='0') b+=a[i],sum+=a[i]-'0';
        }
        if(b=="") return 0;
        long long c = stoll(b);
        return c * sum;
    }
};