//Find the pair whose sum is equal to x;
#include<bits/stdc++.h>
using namespace std;

bool slove(int arr[],int x,int n)
   {
    int i=0;
    int j=n-1;
    while(i<j)
    {
     int sum=arr[i]+arr[j];
     if(sum==x) return true;
     if(sum>x) j--;
     else i++;
    }
    return false;
    }
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);
    int x;cin>>x;
    bool ans = solve(arr,x,n);
    if(ans==true) cout<<"yes";
    else cout<<"No";
}
