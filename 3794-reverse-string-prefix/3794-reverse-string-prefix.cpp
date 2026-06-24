class Solution {
public:
    string reversePrefix(string s, int k) {
        // string a = s.substr(1,);
        // string b = s.substr();
        reverse(s.begin(),s.begin()+k);
        return s;
    }
};