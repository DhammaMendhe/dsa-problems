#include<bits/stdc++.h>
using namespace std;
void elementIndex(int array[],int size){
vector<bool>visited(size,false);


for(int i=0;i<size;i++){
if(visited[i] == true)
continue;

int count =1;
for(int j=i+1;j<size;j++){
if(array[j] == array[i]){
visited[j] = true;
count++;

}

}


cout<<"the array element is "<<array[i]<<" "<<count<<endl;
}



}

int main(){

int arr[]= {1,2,22,33,33,44,44,44,5,5,5,5};
int size= sizeof(arr)/sizeof(int);
elementIndex(arr,size);

return 0;

}
