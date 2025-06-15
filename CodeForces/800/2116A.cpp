#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int gellyfish = min(b,d);
        int flower = min(a,c);
        if (gellyfish<=flower){
            cout << "Gellyfish" << '\n';
        }
        else{
            cout << "Flower" << '\n';
        }
    }
} 