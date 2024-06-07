#include <iostream>
using namespace std;

int main()
{
     int m= 5,n=5;
// int arr[m][n] = {{12,12},{12,12},{12,12},{12,12},{12,12},{12,12}};

// int arr[][n] = {1,2,3,4,8,9,1,3,4,4,4,4};
int arr[][n] ={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},};
for(int i = 0;i<m-1;i++){
 
 for(int j = 0;j<n;j++){
    cout<<arr[i][j]<<" ";
    
}   


cout<<endl;
}
for(int i = 0;i<m-1;i++){
 
 for(int j = i+1;j<n;j++){

swap(arr[i][j],arr[j][i]);    
}   


cout<<endl;
}

for(int i = 0;i<m-1;i++){
 
 for(int j = 0;j<n;j++){
    cout<<arr[i][j]<<" ";
    
}   


cout<<endl;
}
    return 0;
}