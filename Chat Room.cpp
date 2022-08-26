#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s, a = "hello";
    int l = 0, count = 0;
    cin >> s;
    for(int i = 0;i < s.size(); i++){
        if(s[i] == a[l]){
            count++;
            l++;
        }
        if(l == 5){
            break;
        }
    }

    if(count == 5){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}