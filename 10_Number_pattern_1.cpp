/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
// Approach ---> 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int cnt = 0;
 for(int row=1; row<=5; row++){
    cnt = row;
    for(int col = 1; col<=row; col++){
        cout<<cnt<<" ";
        cnt--;
    }
    cout<<endl;
 }
 return 0;
}

// Approach-----> 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
  for(int row=1; row<=5; row++){
    for(int col = row; col>=1; col--){
        cout<<col<<" ";
    }
    cout<<endl;
  }
 return 0;
}