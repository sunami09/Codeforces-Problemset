#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }


    int j = 0, count = 0;

    while(arr[j] >= arr[k - 1] && j < n){
        if(arr[j] > 0){
            count++;
            
        }
      
        j++;
    }

    cout << count << endl;
    
    return 0;
}