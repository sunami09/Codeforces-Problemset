#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int lower = 0, upper = 0;

    string s;

    cin >> s;

    for(int i = 0; i < s.size(); i ++){
        if(isupper(s[i])){
            upper++;
        }else{
            lower++;
        }
    }

    if(upper > lower){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s;
    return 0;
}