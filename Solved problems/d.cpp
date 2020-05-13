#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d ",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define F first
#define S second

ll ar[1000005];
ll br[10000][4];
//ll cr[100][100];
string st;

ll n,m;
//vector<ll> br[1000010];



ll a[505][505],b[505][505];
int main()
{
    vector<string> st;
    string temp;
    ll t=8;
    while(cin>>temp )
    {
        st.pb(temp);
    }
    srt(st);
    ll c=1,mx=0;
    for(ll i=0;i<st.size()-1;i++)
    {
        if(st[i]==st[i+1])
        {
            c++;
        }
        else
        {
            if(c>mx)
            {
                temp=st[i];
                mx=c;


            }
             c=1;
        }
    }
    if(c>mx)
            {
                temp=st[st.size()-1];
                mx=c;
                c=1;

            }
    cout<<temp<<endl;

}
