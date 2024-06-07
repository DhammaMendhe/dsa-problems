#include <bits/stdc++.h>
using namespace std;

//brutforce approch

int majority(vector<int> &v)
{
    int index = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = i; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                index++;
                if (index >= v.size() / 2)
                {
                    return i;
                }
            }
        }
        //return index;
    }
}
    int main()
    {
vector<int>v={1,2,3,4,7,7,5,7,7,7};
 cout<< majority(v);
        return 0;
    }
