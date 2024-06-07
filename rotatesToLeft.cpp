

#include <bits/stdc++.h>
using namespace std;

void rotatingleft (vector < int >&v, int n,int k)
{
while(k--){
      int first = v[0];

      for (int i = 0; i < n; i++)
	{
	    //cout<<"continue"<<endl;
	    cout<<v[i]<<" ";
	  if (i == n-1)
		{
		    cout<<"f: "<<first;
		  v[n-1] = first;
		  continue;
		  //break;
		}
	  v[i] = v[i + 1];

	}
	cout<<endl;

}
}
void print(vector < int >v){
     for (int i = 0; i < v.size (); i++)
	{
	  cout << v[i] << " ";

	}
}

int main ()
{

  vector < int >v = { 1, 2 };

  print(v);
  cout << endl;
  rotatingleft (v, v.size (),3);
  print(v);

 
  return 0;
}

