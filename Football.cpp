#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string input;
    cin >> input;
    bool dangerous = false;
    char check = input[0];
    int count = 1;
    for(int i = 1; i < input.size(); i++){
        if(input[i] == check){
            count++;
        }else{
            check = input[i];
            count = 1;
        }

        if(count == 7){
            dangerous = true;
            break;
        }
    }

    if(dangerous){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}