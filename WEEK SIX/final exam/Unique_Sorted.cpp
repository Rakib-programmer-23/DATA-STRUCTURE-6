#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n;
    cin>>n;
    while(n--)
    {
        stack<int>st;
        int t;
        cin>>t;
        while(t--)
        {
            int x;
            cin>>x;
            s.insert(x);
        }

        for(auto it=s.begin(); it!=s.end();it++)
        {
            st.push(*it);
        }
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        s.clear();
        cout<<endl;
    }
      
    return 0;
}