#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5,6,7 } ;
    
    for(int i=0;i<v.size()-1;i++){
      for(int j=i;j<=v.size()-1;j++){
      for(int k=i;k<=j;k++){

        cout<<v[k]<<" ";
}
cout<<endl;
}
// cout<<endl;
}

    return 0;
}

