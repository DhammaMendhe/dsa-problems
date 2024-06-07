#include <iostream>
using namespace std;

int main()
{
    int m = 3, n = 3;
    // int arr[m][n] = {{12,12},{12,12},{12,12},{12,12},{12,12},{12,12}};

    // int arr[][n] = {1,2,3,4,8,9,1,3,4,4,4,4};
    int arr[n][n] = {{1, 2, 3}, {4, 5,6}, {7,8,9}}; //{1,2,3},{1,2,3}
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        // }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {

        for (int j = i; j < n; j++)
        {
            swap(arr[j][i] ,arr[i][j] );
            // cout<<arr[i][j]<<" ";
            // cout<<arr[j][i]<<" ";
            // arr[i][j] =0;
        }

        cout<<endl;

    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }

        // }
        cout << endl;
    }
    
    return 0;
}