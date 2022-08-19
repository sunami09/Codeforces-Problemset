#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    string s;
    cin >> s;

    vector<int> arr;
    

    for(int i = 0; i < s.size(); i++){
        if(s[i] != '+'){
            arr.push_back(((int)s[i]) - ((int)'0'));
        }
        
    }
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size() - 1; i++){
        cout << arr[i] << "+";
    }

    cout << arr[arr.size() - 1];
}