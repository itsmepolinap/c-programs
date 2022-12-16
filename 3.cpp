#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int index(vector<int>arr, int t){
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == t) return i;
    }
    return -1;
}

int main(){
    vector<vector<int>>V(2);
    int x;
    while(cin>>x){
        int indx = index(V[0], x);
        if(indx==-1){
            V[0].push_back(x);
            V[1].push_back(1);
        }else{
            V[1][indx]+=1;
        }
    }
    for(auto x: V[0]) cout<<x<<" ";
    cout<<endl;
    for(auto x: V[1]) cout<<x<<" ";


    return 0;
}