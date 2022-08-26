#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;

    int total_passengers = 0, max_passengers = 0;
    
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        total_passengers = total_passengers - a;
        total_passengers = total_passengers + b;
        if(total_passengers > max_passengers){
            max_passengers = total_passengers;
        }
    }

    cout << max_passengers;
    return 0;
}