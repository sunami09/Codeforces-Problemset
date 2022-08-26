#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int k, n, w;

    cin >> k >> n >> w;

    int total_cost = k * ((w * (w + 1)) / 2);

    if(n < total_cost){
        cout << total_cost - n;
    }else{
        cout << 0;
    }
    return 0;
}