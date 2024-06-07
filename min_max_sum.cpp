#include <bits/stdc++.h>
using namespace std;
void miniMaxSum(vector<int> arr)
{
    int len = arr.size();
    int64_t minx = INT_MAX, maxn = 0;

    for (int i = 0; i <= len - 1; i++)
    {
        int64_t sum = 0;
        for (int j = 0; j <= len - 1; j++)
        {
            sum += arr[j];
            
        }
        // cout<<sum<<"   ";
        sum-=arr[i];
        minx = min(sum, minx);
        maxn = max(sum, maxn);
    }
    cout << minx << " " << maxn;
}

int main()
{

    // string arr_temp_temp;
    // getline(cin, arr_temp_temp);

    // vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr = {942381765 ,627450398 ,954173620 ,583762094, 236817490};

    // for (int i = 0; i < 5; i++) {
    //     int arr_item = stoi(arr_temp[i]);

    //     arr[i] = arr_item;
    // }

    miniMaxSum(arr);

    return 0;
}
