#include<bits/stdc++.h>
using namespace std;
int seclargest( vector<int>&v){
    sort(v.begin(),v.end());
    int len = v.size()-1;
    while(len > 0){

     if(v[len] != v[len-1]){
       return v[len-1];
        }
        len--;
    }
     return v.size()-1;
 }

int main(){
 vector<int>v={1,2,3,4,5,6,7,7};
 cout<< seclargest(v);

//  for(int x: v){
//     cout<<x;
//  }
 
return 0;
}