
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        string s;
        cin>>n;
        cin>>s;
        int ar[n+1];
        int tot=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            tot+=ar[i];
        }
        int cur=1e9;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                cur = min(ar[i],cur);
                tot-=cur;
                cur = 1e9;

            }
            else{
                cur = min(ar[i],cur);
            }

        }
        cout<<tot<<endl;
    }
    return 0;
}
