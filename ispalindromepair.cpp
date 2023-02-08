//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    // Function to check if a palindrome pair exists
    bool palindromepair(int N, string arr[]) {
        
        for(int i = 0;i< N-1;i++)
        {
            for(int j = i+1;j<N;j++)
            {
            	cout<<"Checking "<<arr[i]<<"  "<<arr[j]<<endl;
                
                if(ispalindrome(arr[i], arr[j]))
                    return true;
            }
        }
        return false;
        // code here
    }
    bool ispalindrome(string s1, string s2)
    {
        int len = s1.length();
        int len1 = s2.length();
        if(s1[0] != s2[len1 -1])
            return false;
        string s = s1 +s2;        
        
        len = s.length();
        int index = 0, rindex = len-1;        
        cout<<"Checking "<<s<<endl;
        while(index < rindex )
        {
            if( s[index] == s[rindex])
            {
                index++; rindex--;
            }
            else
                return false;
        }
        cout<<"Index "<<index<<" "<<rindex<<endl;
        return true;
        
    }

};

//{ Driver Code Starts.
int main() 
{ 
    /*int t;
    cin>>t;
    while(t--)
    {*/
        int N;
        cin >> N;
        string arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.palindromepair(N, arr) << endl;
   // }
    return 0; 
} 
