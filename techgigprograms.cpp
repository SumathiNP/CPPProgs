	int N =10;
	int exc_score,med_score, high_score;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
		if(a[i]>100 || a[i] <0)
			continue;
		else if	(a[i] > 75)	
			exc_score++;
		else if	(a[i] > 40)	
			avg_score++;			
		else 
			low_score++;
	}
	cout<<"The number of students with good, average high scores are "<<
		exc_score<<"\t"<<avg_score<<"\t"<<low_score<<endl;

	
	//Write code here
	
	
	#include <iostream>
using namespace std;

int main() {
    int N = 0;
    int A,B,X;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int num;
        cin>>A>>B;
        cin>>X;
        num = X;
        while(num<10^9)
        {
            if(A==B)
            {
                cout<<"-1"<<endl;
                break;
            }
            if(num%A == 0  && num%B != 0)
            {
                cout<<num<<endl;
                break;
            }
            num++;
        }
        
    }
	// your code goes here
	return 0;
}

//Time limit exceeded



#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	int A,B;
	string firstlang,seclang;
	firstlang = "abcdefghijklm";
	seclang = "NOPQRSTUVWXYZ";
	cin>>N;

	int noWords;
	string strcheflang = firstlang + seclang;
	string strinput1;
	
	char strinput1[100];
	
	for(int i=0;i<N;i++)
	{
        cin>>noWords;

        string::size_type ch;
        ch = strinput1.find_first_not_of(strcheflang);
        if(ch== string::npos)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}// your code goes here
	return 0;
}


void sort012(int a[], int n)
{
    int mid = (int)n/2;
    int low = 0;
    int high = n-1;
    
    while(low<high && mid < high)
    {
        int temp;
        while(a[low]==0)
            low++;
        while(a[high] == 2)            
            high--;
        if(low>mid)
            mid = low+1;
        else if(high < mid)
            mid= high -1;
            
        if (a[high] < a[low] && low < high)
        {
            temp = a[low];
            a[low] = a[high];
            a[high] = temp;
            low++;high--;
        }
        else 
		{
			if(a[high] < a[mid] && mid < high)
	        {
	            temp = a[mid];
	            a[mid] = a[high];
	            a[high] = temp;
	            mid++;high--;
	
	        }
	        if(a[low] > a[mid] && mid > low)
	        {
	             temp = a[mid];
	            a[mid] = a[low];
	            a[low] = temp;
	            low++;
	            mid--;
	            
	        }
    	}
    }

  }        

int lps(string s) {
	    //string temp;
	    int index = 0;
	    int len = s.length();
	    if(len < 2)
	        return 0;
	    index = len-1;
	    int propprefix = 0;

        string prefix = s;
        string suffix = s; 
        int sufindex = 1;        
        
        int pos = s.rfind(s[0],len-1);
        
        while(pos>0)
        {
            suffix = s.substr(pos,len-pos);
            prefix = s.substr(0,len-pos);
            
	        if(prefix == suffix)
	            propprefix = prefix.length();
            pos = s.rfind(s[0],pos-1);
	    }
	    return propprefix;
	    // Your code goes here
	}

	int lps(string s) {
	    //string temp;
	    int index = 0;
	    int len = s.length();
	    if(len < 2)
	        return 0;
	    index = len-1;
	    int propprefix = 0;

        string prefix = s;
        string suffix = s; 
        int sufindex = 1;        
	    while(index >0)
	    {
            prefix.erase(index,1);
            suffix.erase(0,1);
	        if(prefix == suffix)
	            propprefix = index+1;

	                
	        index++;sufindex--;
	        if(index <0)
	            break;
  
	        

	    }
	    return propprefix;
	    // Your code goes here
	}
	int lps(string s) {
	    //string temp;
	    int index = 0;
	    int len = s.length();
	    int propprefix = 0;

        string prefix = "";
        string suffix = ""; 
        int sufindex = len - 1 - index;        
	    while(index < len -1)
	    {
            prefix += s[index];

            suffix = s[sufindex]+suffix;
                        
	        if(prefix == suffix)
	            propprefix = index+1;
	                
	        index++;sufindex--;

	    }
	    return propprefix;
	    // Your code goes here
	}