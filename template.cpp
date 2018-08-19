#include<bits/stdc++.h>
#define ll long long

ll fastexp(ll x,ll n)
{
    ll result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=result * x;
        x=x*x;
        n=n/2;
    }
    return result;
}
ll modexp(ll x,ll n,ll M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modexp((x%M*x%M)%M,n/2,M);
    else                             //n is odd
        return (x%M*modexp((x%M*x%M)%M,(n-1)/2,M))%M;

}
fenwick_update(ll BIT[],ll x,ll delta)
{
    //BIT array x is index and delta is value to update
    for(; x <= n; x += x&-x)
        BIT[x] += delta;
}
fenwick_query(ll BIT[],ll x)
{
    //BIT array and x index
     ll sum = 0;
     for(; x > 0; x -= x&-x)
        sum += BIT[x];
     return sum;
}
arrdisp(ll A[],ll N)
{
    for(ll i=0;i<N;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
arrinp(ll A[],ll N)
{
    for(ll i=0;i<N;i++)
        cin>>A[i];
}
int main()
{

}
