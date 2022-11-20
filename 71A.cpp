#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    int n,i;
    string s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        int len=s.size();

        if(len>10)
        {
            int cnt = 0;
            for(int i=1; i<len-1; i++)
            {
                cnt++;

            }
            cout<<s[0]<<cnt<<s[len-1]<<"\n";

        }
        else
        {
            cout<<s<<"\n";

        }

    }
    return 0;


}
