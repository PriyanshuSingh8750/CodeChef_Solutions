#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
  unordered_set <char>st ( begin( s ) , end( s ) );
	int t;
	cin>>t;
	while(t--){
	    string a;
	    cin>>a;
	    bool fl=true;
	    for(int i=0;i<a.size();i++){
	        if(st.find(a[i])==st.end()){
	            fl=false;
	        }
	    }
	    cout<<((fl)?"Yes":"No")<<endl;
	}
	return 0;
}
