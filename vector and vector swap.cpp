#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    vector<int>v2(3,50);
    swap(v,v2);
    for(auto element:v){
        cout<<element<<endl;
    }
    for(auto element:v2){
        cout<<element<<endl;
    }
}
