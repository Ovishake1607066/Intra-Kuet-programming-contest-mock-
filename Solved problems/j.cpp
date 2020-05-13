#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ar[10003]= {0},t,it,a,b,x,y,i,j,fl;
    ar[0]=1;
    ar[1]=1;
    for(i=2; i<10003; i++)
    {
        if(ar[i]==0)
        {
            for(j=i; j*i<10003; j++)
            {
                ar[i*j]=1;
            }
        }

    }
    cin>>t;
    for(it=0;it<t;it++)
    {
        cin>>a>>b;
        if(a>b)
        {
            x=b;
            y=a;
        }
        else
        {
            x=a;
            y=b;
        }
        fl=0;
        for(;y>=x;y--)
        {
            if(ar[y]==0)
            {
                fl=y;
                break;
            }
        }
        if(fl==0)
        {
            cout<<"-1"<<endl;
        }
        else
            cout<<fl<<endl;
    }
}
