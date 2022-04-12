#include<string.h>
#include<iostream>
using namespace std;

int j=0,r=0;
int array[]={};
string arr[]={};

bool swap_(char str[], int start, int curr)
{
	for (int i=start; i<curr; i++)
	{
		if (str[i] == str[curr]) 
		{
			return 0;
		}
		return 1;
	}
}
		
void minimum(int arr[],int n)
{
	int min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"\nSmallest LCS: "<<min<<endl;
}
		
void per(char str[], int in, int n)
{
	if(in>=n)
	{
		cout<<str<<"\t";
		arr[j]=str;
		j++;
		return;
	}
	for(int i=in;i<n;i++)
	{
		bool check=swap_(str,in,i);
		if(check)
		{
			swap(str[in], str[i]);
			per(str,in+1,n);
			swap(str[in], str[i]);
		}
	}
}

int LCS_substr(string X, string Y, int m, int n)
{
    int LCSuff[m + 1][n + 1];
	int result=0;
	for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i == 0 || j == 0) 
            {
                LCSuff[i][j] = 0;
            }
            else if (X[i - 1] == Y[j - 1])
            {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else 
            {
                LCSuff[i][j] = 0;
            }
        }
	}
	array[r]=result;
	r++;
	return result;
}

	

int main() 
{
	char string[50];
	int n,k,i,l,m;
	cout<<"\nEnter string: \n";
	cin>>string;
	int s=strlen(string);
	n=strlen(string);
	per(string, 0, n);
	for(i=0;i<j;i++)
    {
        cout<<arr[i];
    }
    if(j==2) 
    {
        cout<<"\nThe result is 0";
    }
	else
    {
        for(i=0;i<j;i++)
        {
            for(k=i+1;k<j;k++)
            {
                LCS_substr(arr[i], arr[k], s, s);
            }
        }
	}
	minimum(array, r);
	return 0;
}
