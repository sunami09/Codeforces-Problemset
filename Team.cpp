#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, implement = 0;
    cin >> n;

    while(n--){
        int p, s, k;
        cin >> p >> s >> k;
        if((p+s+k) >= 2){
            implement++;
        }
    }

    cout << implement;
    return 0;
}