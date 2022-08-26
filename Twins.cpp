#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;

    int arr[n], sum = 0, mysum = 0, count = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + n);

    for(int i = n - 1; i >= 0; i--){
        mysum += arr[i];
        sum -= arr[i];
        count++;

        if (mysum > sum)
        {
            break;
        }
    }

    cout << count;

    


    return 0;
}