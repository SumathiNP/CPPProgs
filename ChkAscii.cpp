
#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
	//string str;
	//str.clear();
	char str[25];
	memset(str,0,25);
	
	int cryptcode = 0;
	cout <<"Enter a String ";
	cin>>str;
	for(int i=0;i<strlen(str);i++)
	{
		char ch = str[i];
		int asc_ch = toascii(ch);
		if(ch>='a' && ch<='z')
		{
			cryptcode += ch-toascii('a');
			
		}
	}

	cout<<"Cryptcode "<<cryptcode;
	return 0;
	
}