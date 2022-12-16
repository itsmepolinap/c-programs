#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string x;
    vector<string> S;
    while(cin>>x){
        S.push_back(x);
    }
    sort(S.begin(), S.end());
    for(auto x: S) cout<<x<<" ";
    return 0;
}