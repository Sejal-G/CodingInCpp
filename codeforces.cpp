#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
	string s;
	cin >> s;
	if(s[0]>s[1])
	{
	    for(int i=1;i<n;i++){
	       printf("%c",s[i]); 
	    }
	    printf("\n");
	}
	else{
	    int i;
	    for(i=0;i<n-1;i++){
	        if(s[i]<s[i+1])
	            printf("%c",s[i]);
	        
	        else break;
	    }
	    while(i<n)
	    printf("%c",s[++i]);
	}
    return 0;	
}
