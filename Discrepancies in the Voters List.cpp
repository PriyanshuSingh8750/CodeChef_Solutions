#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c;
    cin>>a>>b>>c;
    unordered_map<int, int> mp;
    vector<int> vt;
    for(int i=0;i<a;i++){
        int v;
        cin>>v;
        mp[v]++;
    }
    for(int i=0;i<b;i++){
        int v;
        cin>>v;
        mp[v]++;
    }
    for(int i=0;i<c;i++){
        int v;
        cin>>v;
        mp[v]++;
    }
    
    for(auto i:mp){
        if(i.second>1){
            vt.push_back(i.first);
        }
    }
    sort(vt.begin(),vt.end());
    cout<<vt.size()<<endl;
    for(int i=0;i<vt.size();i++){
        cout<<vt[i]<<endl;
    }
	return 0;
}
