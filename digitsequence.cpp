#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int digits[10]= {};
    for (int i{}; i<n; i++)
    {
        int num;
        cin>>num;
        int counting[10]= {};
        while(num>0)
        {
            int a = num%10;
            counting[a]+=1;
            if (counting[a]==1)
                digits[a]+=1;
            num-=a;
            num/=10;
        }

    }

    int max = digits[0];
    for (int i{1}; i<10; i++)
    {
        if (digits[i]>max)
            max = digits[i];

    }

    cout<<max;

}
