#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    char prev = '.';
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != prev){
            count++;
        }
        prev = s[i];
    }

    if(count % 2 == 0){
        cout << "CHAT WITH HER!" ;
    }else{
        cout << "IGNORE HIM!";
    }
    return 0;
}