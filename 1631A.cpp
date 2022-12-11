#include<iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[i],b[i];
        for(i=1; i<n; i++)
            cin>>a[i];
        for(i=1; i<n; i++)
            cin>>b[i];

        for( i=0; i<n; i++)
        {
            if(a[i]<b[i])
            {
                swap(a[i],b[i]);            }
        }

        int Ma=a[0];
        for(i=1; i<n; i++)
        {
            if(a[i]>Ma)
                Ma=a[i];
        }
        int Mb=b[0];
        for(i=1; i<n; i++)
        {
            if(b[i]>Mb)
                Mb=b[i];
        }
        cout<<Ma*Mb<<"\n";
    }
     return 0;
}
