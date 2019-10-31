#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define mod 1000000007

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin>>t;

   while(t--){
       ll n;
       cin>>n;

       ll a[n];
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
       }

       int flag = 0;
       ll pc=0,nc=0;

       for(ll i=0;i<n;i++)
       {
          if(a[i]>=0)
          pc++;
          else if(a[i]<0)
          {
              nc++;
              flag = 1;
          }
       }

       if(flag == 0)
       {
           cout<<pc<<" "<<pc<<endl;
       }
       else if(flag == 1)
       {
           cout<<max(pc,nc)<<" "<<min(pc,nc)<<endl;
       }
   }
}
