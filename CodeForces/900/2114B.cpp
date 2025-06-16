#include<bits/stdc++.h>
using namespace std;


void testcase(){
    int n, k;
    cin >> n >> k;
    string arr;
    cin >> arr;
    int zero = 0;
    int one = 0;
    for (int i = 0;i<n;i++){
        if (arr[i]=='1') one++;
        else zero++;
    }
    int one_pair = one/2;
    int zero_pair = zero/2;
    if (k==0){
        if (one_pair + zero_pair == 0 || one_pair == zero_pair){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
        return;
    }
    int h = max(zero_pair, one_pair);
    int l = min(zero_pair, one_pair);
    int d = 2;
    if (l==0){
        if (k==0){
            cout << "YES" << '\n';
        }
        else if (h==k){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
        return;
    }
    int lowest = h - l;
    if (!(lowest <=  k && k <= l+h)){
        cout << "NO" << '\n';
        return;
    }
    if (lowest % 2 == 0 && k % 2 == 0){
        cout << "YES" << '\n';
    }
    else if (lowest % 2 == 1 && k % 2 == 1){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        testcase();
    }
    return 0;
}