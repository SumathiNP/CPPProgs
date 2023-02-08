//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	bool isHappy(int N)
	{
		bool bHappy = false;
		int temp = N;
	    while(temp>9)
	    {
	        int sumdigits =0;
	        int digit;
	        while(temp > 0)
	        {
	            digit = temp%10;
	            sumdigits += digit * digit;
	            temp/=10;
	        }
	        temp = sumdigits; 
	    }
	    if(temp == 1)
	     	bHappy = true;
		return bHappy;	     	
		
	}
    int nextHappy(int N){
        
        int nextNum = N+1;
        
        while(nextNum > 1)
        {
        	if(isHappy(nextNum))
				return nextNum;
			else
				nextNum++;
        }
        return nextNum;
       // code here
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    //cin>>t;
    //while(t--)
    //{
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    //}
    return 0; 
}