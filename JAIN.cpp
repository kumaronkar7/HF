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
      cin>>n;

      string str;

      vector<string> vec;

      for(ll i=0;i<n;i++)
      {
          cin>>str;
          vec.push_back(str);
      }


      ll count = 0,i,j;

      for(ll i=0;i<vec.size()-1;i++)
      {
          for(ll j=i+1;j<vec.size();j++)
          {
              string str1 = "";

             // cout<<vec[i]<<endl;
              //cout<<vec[j]<<endl;

              str1 = vec[i] + vec[j];

             size_t found = str1.find('a');
              size_t found1 = str1.find('e');
              size_t found2 = str1.find('o');
              size_t found3 = str1.find('i');
              size_t found4 = str1.find('u');

              if (found != string::npos && found1 != string::npos && found2 != string::npos && found3 != string::npos && found4 != string::npos)
              {
               count++;
              }

              //cout<<str1<<endl;

          }
      }

      cout<<count<<endl;


      vec.clear();
  }
}
