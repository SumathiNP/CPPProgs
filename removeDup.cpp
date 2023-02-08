/*Given a string without spaces, the task is to remove duplicates from it.

Note: The original order of characters must be kept the same. 

Example 1:

Input: S = "zvvo"
Output: "zvo"
Explanation: Only keep the first
occurrence*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string removeDups1(string S) 
	{
	    string Sdup;

	    int i=0;
	    Sdup+=S[i];i++;
	    while(i<S.length())
	    {
	    	cout<<Sdup<<endl;
	    	if(Sdup.find(S[i],0)== string::npos)
	    		Sdup+=S[i];
			i++;				    	
	    }
	return Sdup;
}
string removeDups(string S) 
	{
	    string Sdup;
	    string TempS = S;
	    int i=0;
	    while(i<TempS.length())
	    {
	    
	        char ch = TempS[i];
	        int j=i;
	        int pos = TempS.find(ch,j+1);
	        if(pos != string::npos )
	        {
	            Sdup+=TempS.substr(j,pos-j);
	            while(pos)
	            {
    	            j+=pos;
    	            pos = TempS.find(ch,j+1);
    	            if(pos == string::npos)
    	                break;
                    Sdup+=TempS.substr(j,pos-j);    	                
	            }
	            Sdup+=TempS.substr(j,TempS.length()-j);
	        }
	        else
	            Sdup+=TempS.substr(j,TempS.length()-j);
            TempS = Sdup;
            Sdup = TempS.substr(0,i+1);
            i++;
	    }
	    return Sdup;
	}
int main() {
	string s; 
	cin>>s;
	cout<<removeDups1(s)<<endl;
}
/*

string removeDups(string s) 
	{ 
	    int j = 0;
	  
	    int fre[26] = {0};

	    for(int i = 0; i < s.size(); i++)
	    {
	    	if(fre[s[i] - 'a'] == 0)
	    		s[j++] = s[i];

	    	fre[s[i] - 'a'] = 1;
	    }
	    
	    return s.substr(0, j); 
	}
	
*/	