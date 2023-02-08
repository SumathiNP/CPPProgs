//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<string> findPrefixes(string arr[], int n)
    {
    	vector<string> vprefixes;
        string prefix[n];int index=0,index1=0;
        for(int i=0;i<n-1;i++)
        {
        	string orgprefix;
        	if(prefix[i].length() == 0)
            	prefix[i] = arr[i][0];
			else
				orgprefix = prefix[i];         	

            for(int j=i+1;j<n;j++)
            {
            	index = 0;
            	if(i==j) continue;
            	if(prefix[j].length() == 0)
            		prefix[j] = arr[j][0];
	   
				
				while(arr[i][index] == arr[j][index] ) 
				    index++;
				if(prefix[i].length() < index+1)
					prefix[i]=arr[i].substr(0,index+1);
				if(prefix[j].length() < index+1)
					prefix[j]=arr[j].substr(0,index+1);
				cout<<"Prefix i , j"<<i<<" "<<j<<index<<" "<<prefix[i]<<prefix[j]<<endl;
			}	
				
			vprefixes.push_back(prefix[i]);
        }

		return vprefixes;
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t=1;
    //cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}

// } Driver Code Ends    