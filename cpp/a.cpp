#include<bits/stdc++.h>
using namespace std;
#define int         long long int

int prime[10000002];
void sieve()
{
    int n=10000002,b=sqrt(10000002);
    prime[0]=prime[1]=1;
    for(int i=2;i<=b;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<n;j+=i)
            prime[j]=1;
        }
    }
}
void dsc()
{
    int l,r;
    cin>>l>>r;
    int a=sqrt(r);
    int n=r-l+1;
    int arr[n];
    for(int i=0;i<n;i++)
    arr[i]=1;
    for(int i=2;i<=a;i++)
    {
        if(prime[i]==0)
        {
            int x=(l/i)*i;
            if(x<l)
            x+=i;
            for(int j=x;j<=r;j+=i)
            {
                arr[j-l]=0;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        count++;
    }
    cout<<count<<endl;


}
signed main(){
    int t;
    cin>>t;
    sieve();
    while(t--)
    dsc();
}
