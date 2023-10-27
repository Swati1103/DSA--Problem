#include <iostream>
using namespace std;

class Solution
{
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
        //code here
        if(n==0 || n==1)
        return 1;
        int mod = 1e9+7;
        long long dp[n+1];
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=0;
            for(int j=0;j<i;j++){
                dp[i] = (dp[i]+(dp[j]*dp[i-j-1])%mod)%mod;
            }
        }
        return dp[n];
    }
};

int main()
{
    for (int i = 0; i < 10; i++)
        cout << findCatalan(i) << " ";
    return 0;
}
