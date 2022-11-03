//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    vector<int> arr(N,0);
    for(int i=0;i<N-1;i++){
        arr[A[i]-1]++;
    }
    
    int ans=-1;
    for(int i=0;i<N;i++){
        if(arr[i] == 0){
            ans = i+1; 
        }
    }
    return ans;
}