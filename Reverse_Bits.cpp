#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        long long reversedBits(long long x)
        {
            long long rev[32]={0},i=1,sum=0;
            long long temp=x;
            while(temp)
            {
                if(temp%2==1)
                {
                    rev[i]=1;
                    sum+=pow(2,32-i);
                }
                temp/=2;
                i++;
            }
            return sum;
        }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        Solution ob;
        cout<<ob.reversedBits(x)<<endl;
    }
    return 0;
}
