class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> dec;
        char ch='a';
        
        for(int i=0;i<key.size();i++){
            if(key[i]==' ') continue;
            auto it = dec.find(key[i]);
            if(it==dec.end()){
                dec[key[i]]=ch;
                ch++;
                cout<<key[i]<<" "<<dec[key[i]]<<endl;
            }
            
            
        }
        string a="";
        for(int i=0;i<message.size();i++){
            if(message[i]==' '){
                a+=' ';
                continue;
            }
            a+=dec[message[i]];
        }
        return a;
    }
};