#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int m;
    vector<string>v1(m);
    cout << "enter the total value you want for 1st vector : " << endl;
    cin >> m;
    cout << "enter value for vector 1" << endl;
    for(int i=0;i<m-1;i++)
    {
        cin >> v1[i];
    }
    cout << "vector 1 is : " << endl;
    for(int i=0;i<m-1;i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    int n;
    vector<string>v2(n);
    cout << "enter the total value you want for 2st vector : " << endl;
    cin >> n;
    cout << "enter value for vector 2" << endl;
    for(int i=0;i<n-1;i++)
    {
        cin >> v2[i];
    }
    cout << "vector 2 is : " << endl;
    for(int i=0;i<n-1;i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

	int p;
    vector<string> v3(p);
	for(int i=0;i<p-1;i++)
	{
	    if(v1[i] == v2[i])
	    {
	        v3[i] += v1[i];
	    }
	    else if(v1[i] != v2[i])
	    {
	        v3[i] += v2[i];
	    }
	}
	cout<<"\nFinal vector is : \n";
	for(int i=0;i<p-1;i++)
	{
		cout<<v3[i]<<" ";
	}
	cout<<endl;
	return 0;
}