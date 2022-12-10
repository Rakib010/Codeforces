#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,sum,i;
    cin>>n>>m;
    int ar[n],br[m];
    for(int i=0; i<n; i++)
        cin>>ar[i];
    for(int i=0; i<m; i++)
        cin>>br[i];
    cin>>x;
    int l=0,r=n-1,ind1,ind2;
    int dif=INT_MAX;
    while(l<n && r>=0)
    {
        sum=ar[l]+br[r];
        if(abs(sum-x)<dif)
        {
            ind1=l;
            ind2=r;
            dif=abs(sum-x);
        }
        if(sum>x)
            r--;
        else
            l++;
    }
    cout<<"("<<ar[ind1]<<" "<<br[ind2]<<" )=" <<ar[ind1]+br[ind2]<<endl;
}
