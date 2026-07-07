class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        int n=a.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
           int j=i;
           while(!st.empty() && a[st.top()]<a[i])
           {
           
            
            ans[st.top()]=j-st.top();
            st.pop();
          //  j--;
           }
           st.push(i);

        }
       
        return ans;
    }
};



 // //st.push(a[0]);
        // for(int i=1;i<a.size();i++){
        //     while(a[i]>a[st.top()]&&!st.empty()){
        //         st.pop();
        //     }
        //     st.push(i);
        //     if(a[i]<a[st.top()]) result[i]=a[st.top()-i];
        // }