#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,m,a;
    cin >> n >> m >> a;
    long long int len = 0;
    long long int countlen = 0, countbredth = 0;
    
    long long int bredth = 0;
    if (n % a == 0){
        countlen = n / a;
    }else{
        countlen = (n / a) + 1;
    }

    if (m % a == 0)
    {
        countbredth = m / a;
    }
    else
    {
        countbredth = (m / a) + 1;
    }

    cout << countbredth * countlen;
    return 0;
}