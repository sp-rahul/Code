#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,n;
int t=1;
cin>>t;
while(t--)
{
   cin>>n;
   a=n;
    while(n--);
    n=10-a;
    int sum=0;
    for(int i=1;i<n;i++)
    {
    sum+=i;
    }
    cout<<sum*6<<endl;
}

return 0;
}
