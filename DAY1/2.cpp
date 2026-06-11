#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
    cin>>t;
    
    while(t--){
	// your code goes here
	int n,m;
	cin>>n>>m;
	
	string A;
	cin>>A;
	
	string B ;
	cin>>B;
	
	string ans="";
	int i=0;
	int j=0;
	while(i<A.size() && j<B.size()){
	    if(A[i]!=B[i])break;
	    else ans.push_back(A[i]);
	    i++;
	    j++;
	}
    cout<<ans<<endl;
    }

}
