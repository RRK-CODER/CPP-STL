#include <bits/stdc++.h>

using namespace std;
int main(){
    string s = "hub";
    string t = "Github";
    int S=s.size(),T=t.size();
    for(int i=0; i<T-S+1; i++){
        if(t.substr(i,S)==s){
            cout<<"Found at index"<<i<<"\n";
        }
    }
}