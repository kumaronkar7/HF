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
    while(t--)
    {
        ll n;
        cin >>n;
        ll k, count1=0;
        cin>>k;
        vector<ll> vec1,vec2;
        //vector<int>::iterator i1;
        while(n>0)
        {
            vec2.push_back(n%10);
            n = n/10;
            count1++;
        }

        for(auto i1 = vec2.rbegin(); i1 != vec2.rend(); i1++)
        {
            vec1.push_back(*i1);
        }
        ll count=0;
        auto i1 = vec1.begin();
        while(i1!=vec1.end())
        {
            i1 = min_element(i1, vec1.end());
            if(*i1>k)
                break;
            cout<<*i1;
            count++;
            i1++;
        }
        for(ll i=0; i<count1-count; i++)
            cout<<k;
        cout<<endl;
    }
}
