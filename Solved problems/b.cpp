#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%lf",&n)
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
    ll n;
    cin>>n;
    while(n--)
    {
        double a,b,c;
        sf(a);
        sf(b);
        sf(c);
        if(a+b<=c || b+c<=a || c+a<=b || !a || !b || !c)
        {
            printf("Not a Triangle\n");
        }
        else
        {
            if(a==b && b==c)
            {
                printf("Equilateral Triangle ");
            }
            else if(a==b || b==c || c==a)
            {
                printf("Isosceles Triangle ");
            }
            else printf("Scalene Triangle ");
            double s=(a+b+c)/2;
            a=s-a;
            b=s-b;
            c=s-c;
            s=s*a*b*c;
            s=sqrt(s);
            printf("%.1f\n",s);

        }

    }

}
