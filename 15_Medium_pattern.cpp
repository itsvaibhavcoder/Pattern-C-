#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n; cin>>n;
 for(int row = 1; row<=n; row++){
    // Printing spaces
    for(int col = 1; col<=n-row; col++){
        cout<<" ";
    }
    for(int col = 1; col<=row; col++){
        cout<<"*";
    }
    cout<<endl;
 }
 return 0;
}