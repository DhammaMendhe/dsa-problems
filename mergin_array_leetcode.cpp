#include<bits/stdc++.h>
using namespace std;
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // unordered._map<int,int>mp;
        vector<int>mp;


   for(int i = 0;i<m;i++){

    if(nums1[i] == 0){
        continue;
    }
    nums1.push_back(nums1[i]);
   }

//    for(int i = 0;i<n;i++){
//      if(len2 ==  0)
//     {break;}
//      if(nums1[i] == 0){
//         continue;
//     }
    
//     mp.push_back(nums2[i]);
//    }

   for(int x : mp){
    cout<<x;
   }


        // for(int i =0;i<m-1;i++){
        //     mp[nums1[i]]++;

        // }
        //  for(int i =0;i<n-1;i++){
        //     mp[nums2[i]]++;
            
        // }
        // map<int,int>mp iterater:: it;
        // for(auto it = mp.begin();it != mp.end() ;it++){
        //     if(it->first == 0)
        //      break;
        //     cout<<it->first;
        // }
    }
 
int main(){
  vector<int> nums1 = {1,2,3,0,0,0};
  vector<int> nums2 = {2,5,6};
int m = nums1.size();
int n = nums2.size();
 merge(nums1,m, nums2,  n) ;

 
return 0;
}