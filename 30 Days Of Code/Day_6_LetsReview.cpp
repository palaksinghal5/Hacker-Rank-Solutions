#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        for(int i=0;i<s.length();i=i+2)
        {
            cout<<s[i];
        }  
        cout<<" ";
        for(int i=1;i<s.length();i=i+2)
        {
            cout<<s[i];
        }  

        cout<<endl;    
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
