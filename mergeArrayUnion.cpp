#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int> &arr, vector<int> &arr2)
{

  map<int, int> mp;
  vector<int> v;
  int len1 = arr.size();
  int len2 = arr2.size();

  for (int i = 0; i < len1; i++)
  {
    mp[arr[i]]++;
  }
  for (int i = 0; i < len2; i++)
  {
     mp[arr2[i]]++;
  }

  for(auto it : mp){
    v.push_back(it.first);

  }
  return v;
  //   for (int num : arr2)
  //   {
  //     arr.push_back(num);
  //   }

  //   int j = 0;
  //   for (int i = 1; i < arr.size(); i++)
  //   {
  //     if (arr[i] != arr[j])
  //     {

  //       arr[j] = arr[i];
  //       j++;
  //     }
  //   }
  //   return arr;
}

int main()
{
  vector<int> arr = {1, 3, 7, 8, 9};
  vector<int> arr2 = {1, 5, 6};

  vector<int> vec = removeDuplicates(arr, arr2);

  for (int i = 0; i < arr.size(); i++)
  {

    cout << vec[i]<<" ";
  }

  return 0;
}
