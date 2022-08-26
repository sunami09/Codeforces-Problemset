#include<bits/stdc++.h>
using namespace std;
bool result(int k){
    if(k == 0){
        return false;
    }
    while(k != 0){
        if(k % 10 != 4 && k % 10 != 7){
            return false;
        }
        k = k / 10;
    }


    return true;
} 
int main()
{
    unsigned long long int n;
    cin >> n;
    int k = 0;

    while(n > 0){
        int temp = n % 10;
        if(temp == 4 || temp == 7){
            k++;
        }
        n = n / 10;
    }

    if(result(k)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}