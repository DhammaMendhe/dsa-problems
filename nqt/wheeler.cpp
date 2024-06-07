#include <bits/stdc++.h>
using namespace std;

vector<int> index(int n)
{
    vector<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push_back(x);
    }
    return s;
}

int main()
{

    vector<int> m = {2, 3, 4, 5, 1, 4, 3, 45, 6};

    int n = m.size();
int k = 3;
    int l=0,r=k-1;
    int max_sum = INT_MIN;
    int curr_sum =0;

for(int i =0;i<n;i++){

    while(l<n-1){

curr_sum -= m[l];
cout<<"current sum-:"<<curr_sum<<" ";
l++;
cout<<l<<" :l"<<" ";
r++;
curr_sum+=m[r];
cout<<"current sum + : "<<curr_sum<<" ";

    }
    cout<<endl;
cout<<"count:-"<<i;
    max_sum = max(max_sum,curr_sum);
}
    cout<<endl<<max_sum;

    return 0;
}