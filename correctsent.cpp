#include <iostream>
#include <cstring>
#include <string>
using namespace std;
bool isfirstorseclang(string input1,int no_of_input)
{
    string firstlang,seclang;
	firstlang = "abcdefghijklm";
    int n = input1.length();
 
    char str[n + 1];
  
    int count_firstlang_chars = 0;
    int count_seclang_chars = 0;
    // copying the contents of the
    // string to char array
    strcpy(str, input1.c_str());	
    for(int i=0;i<strlen(str);i++)
    {
        if((int)str[i] >= toascii('a') && (int)str[i]<=toascii('m'))
        {
            count_firstlang_chars++;
            continue;
        }
        else if((int)str[i] >= toascii('N') && (int)str[i]<=toascii('Z'))
        {
            count_seclang_chars++;
            continue;
        }
        else            
            return false;
    }
    if(no_of_input > 1)
    {
        return true;
    }
    else if(count_firstlang_chars >0 && count_seclang_chars >0)
    {
        return false;
    }
    return true;
}
int main() {
	int N;
	int A,B;
	/*string firstlang,seclang;
	firstlang = "abcdefghijklm";
	seclang = "NOPQRSTUVWXYZ";*/
	cin>>N;

	int noWords;
	string strinput;	
	for(int i=0;i<N;i++)
	{
        cin>>noWords;
        bool cheflang= true;
        for(int j=0;j<noWords;j++)
        {            
            cin>>strinput;
            //string::size_type ch;
            //ch = strinput1.find_first_not_of(strcheflang);
            if(!isfirstorseclang(strinput,noWords))
                cheflang = false;
            else
                continue;
            
        }
        if(cheflang ==true)
            cout<<"YES"<<endl;
       else
            cout<<"NO"<<endl;
	}// your code goes here
	return 0;
}
