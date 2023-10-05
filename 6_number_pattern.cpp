// Approach 1 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//  int cnt = 1;
//  for(int row=1; row<=5; row++){
//     for(int col = 1; col<=5; col++){
//         cout<<cnt<<" ";
//         cnt+=1;
//     }
//     cout<<endl;
//  }
//  return 0;
// }


//Approach 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
 for(int row=1; row<=5; row++){
    for(int col = 1; col<=5; col++){
        cout<<(row-1)*5+col<<" ";
    }
    cout<<endl;
 }
 return 0;
}