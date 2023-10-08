/*
a
b b
c c c
d d d d
e e e e e
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
 char ch = 'a';
 for(int row = 1; row<=5; row++){
    for(int col = 1; col<=row; col++){
        cout<<ch<<" ";
    }
    cout<<endl;
    ch +=1;
 }
 return 0;
}