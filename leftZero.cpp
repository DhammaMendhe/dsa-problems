#include <bits/stdc++.h>
using namespace std;

// vector<int>
void zeroleft(vector<int> &v, int n)
{
	int z = 0;

	vector<int> h;
	for (int i = 0; i < n; i++)
	{
		if (v[i] != 0)
		{
			h.push_back(v[i]);

			//  cout<<"condition enter : "<<h[z]<<"   this: "<< z<<endl;
			z++;
			// continue;
		}

		cout << "t: " << z << endl;
	}
	// 	cout<<"at last: "<<z<<endl;
	for (int i = h.size(); i < n; i++)
	{
		// cout<<"element"<<v[z]<<endl;
		h.push_back(0);
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << h[i] << " ";
		// cout<<"before this"<<endl;
	}

	// 	return v1;
}

void print(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}

int main()
{

	vector<int> v = {1, 2, 0, 0, 11, 3, 0, 0, 5};
	print(v);

	cout << endl;

	zeroleft(v, v.size());

	cout << endl;
	// print(v);

	return 0;
}
