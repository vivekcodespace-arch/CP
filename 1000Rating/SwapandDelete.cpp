#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(string s) {
    //first calculate all the zeros and 1's
    int zero_count = 0;
    int one_count = 0;
    for(auto& c: s){
        if(c == '0') zero_count++;
        else{
            one_count++;
        }
    }
    int i=0;
    for(;i<s.length();i++){
        if(s[i] == '1'){
            if(zero_count!=0) zero_count--;
            else break;
        }
        else {
            if(one_count != 0) one_count--;
            else break;
        }
    }
    cout<<s.length() - i;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        string s;
        cin>>s;
        solve(s);
    }

    return 0;
}