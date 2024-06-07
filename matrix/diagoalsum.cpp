#include <bits/stdc++.h>
using namespace std;
   const int m = 3, n = 3;
           int k=0,g=0;

void printing_diagonal(int arr[m][n])
{
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //this is my approch that i wanted to write but did't think about 
            //down method just writen randomly and work  ...
            //    if(i == k && j==g){
            // cout << arr[i][j] <<" ";
            // // cout<<"steps";
            // k++;
            // g++;
                 
            //    }
               if(i==j){
            cout << arr[i][j] <<" ";
               }
            //    cout<<g<<" "<<k;
            if(i==(n-1)  && i==j){

             
              cout << arr[i][j] <<" ";
            //   swap()
              

               
        }


        }
        // cout<<"tisi "<<" ";
        cout << endl;
    }
}

void printing_arr(int arr[m][n], int n, int m)
{
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[m][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

   printing_arr(arr,m,n);
   cout<<"after the process"<<endl;
printing_diagonal(arr);

    return 0;
}