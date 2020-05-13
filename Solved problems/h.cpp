#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
ll mark[100000000];
vector<pair<ll,ll> >v;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m,s=0;
    cin>>n>>m;
    while(m--)
    {
        ll l,r,x=0;
        cin>>l>>r;
        if(l<r)
        {
            x=1;
            r=n+r;
        }
        for(ll i=l,j=0;i<=r;i++)
        {
            if(x)
            {
                j=i%n;
            }
            else
                j=i;
            if(v[j].first==0)
            {
                v[j].first=l;
                v[j].second=r;
            }
            else
            {
                i=v[j].second;
                s+=abs()
            }
        }
    }


}

