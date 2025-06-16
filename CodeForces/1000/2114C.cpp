#include<bits/stdc++.h>

using namespace std;

void testcase(){
    int n;
    cin >> n;
    vector<int> arr (n);
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 1;
    int i = 0;
    int j = 1;
    while(j<n && i<n){
        if (arr[j]<=arr[i]+1) {
            j++;
        }
        else{
            i = j;
            j++;
            ans ++;
        }
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        testcase();
    }
}