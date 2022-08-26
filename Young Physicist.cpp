#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0; 


    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            int k;
            cin >> k;
            if(j == 0){
                x+= k;
            }else if(j == 1){
                y+=k;
            }else{
                z+=k;
            }
        }
    }

    if(x == 0 && y == 0 && z == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}