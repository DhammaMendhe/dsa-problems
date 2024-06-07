#include<bits/stdc++.h>
using namespace std;
 
 void plusMinus(vector<int> &arr) {
int count =0;
int len = arr.size();

int positive =0,nega=0,zero=0;
// float rp=0,rn=0,rz=0;
for(int i = 0;i<=len-1;i++){
    if(arr[i] <= -1){
        nega++;
        // cout<< "negative"<<nega;
    }
    else   if(arr[i] == 0){
        // cout<< "zero"<<zero<<endl;
        zero++;
    }
    else
    {
        positive++;
        // cout<< "posirive :"<< i<<"  " <<arr[i]<<"   "<<positive<<endl;
    }

  
}
// cout<<nega<<"  "<<positive<<" "<<zero<<" ";
// if(len != 0){
//   rp= positive/len;
double rp =static_cast<double>(positive) / len;
 double rn = static_cast<double>(nega)/len;
double rz = static_cast<double>(zero)/len;

// cout<<rp;

   cout<<rp<<endl<<rn<<endl<<rz<<endl;
//    cout<<rn<<endl;
//    cout<<rz<<endl;

}
int main(){
    vector<int>v={-4, 3, -9, 0, 4, 1};
    plusMinus(v);
 
return 0;
}