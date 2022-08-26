#include<bits/stdc++.h>
using namespace std;
bool isLucky(int n){
    if(n == 0){
        return false;
    }

    while(n > 0){
        if(n % 10 != 4 && n % 10 != 7){
            return false;
        }
        n = n / 10;
    }

    return true;
} 
int main()
{
    bool check = false;
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            if(isLucky(i)){
                check = true;
                break;
            }
        }
    }

    if(check){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}