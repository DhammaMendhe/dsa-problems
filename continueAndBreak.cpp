#include<bits/stdc++.h>
using namespace std;





int main(){

int arr[]= {1,2,22,33,33,44,44,44,5,5,5,5};
int size= sizeof(arr)/sizeof(int);
bool visit=false;
//vector<bool> visited(size,false);
for(int i=0;i<size;i++){

 
if(arr[i] == 44)
continue;
cout<<arr[i]<<" ";

}

return 0;

}
