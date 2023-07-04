#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    bool front=true;
	    bool back=true;
	    for(int i=0;i<n;i++){
	        if(a[i]>b[i]){
	            front=false;
	        }
	        if(a[i]>b[n-1-i]){
	            back=false;
	        }
	    }
	    if((front)&&(!back)){
	        cout<<"front"<<endl;
	    }
	    else if((front)&&(back)){
	        cout<<"both"<<endl;
	    }
	    else if((!front)&&(!back)){
	        cout<<"none"<<endl;
	    }
	    else{
	        cout<<"back"<<endl;
	    }
	}
	return 0;
}
