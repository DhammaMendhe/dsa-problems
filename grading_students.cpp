/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
vector<int> gradingStudents(vector<int> grades) {
vector<int>v;
int len = grades.size();
for(int i=0;i<=len-1;i++){
    
    int ele = grades[i] ;
    if(grades[i]<35){
    v.push_back(grades[i]);

    }
    else{
    for(int j=0;j<=5;j++){
        // cout<<"j";
       // cout<<grades[j];

        ele++;
        // int num=0;
        
        if(ele%5==0){
          int  num = ele - grades[i];
            if(num < 3){
            // cout<<"l";
            v.push_back(ele);
            break;
            
        }
        else{
             v.push_back(grades[i]);
            break;
            
        }
        }
        
    }
    }
}

return v;
}

int main()
{
     vector<int>v ={73,67,38,33};
    vector<int>ans =   gradingStudents(v);
    
for(auto x : ans){
    cout<<x<<" ";
}
    return 0;
}

