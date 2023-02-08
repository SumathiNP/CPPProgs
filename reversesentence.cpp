#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int reverseStrings(char str[], int length)
{
	stack<string> list;
	int count = 0;
 	char* token = NULL;
	 
	string s;

	token = (char*)strtok(str, " ");		
	while(token!= NULL)
	{
		s = token;
		list.push(s);
		token = (char*)strtok(NULL, " ");		
		
	}

	
	while(!list.empty())
	{
		s = list.top();
		cout<<s<<"   ";
		list.pop();
		count++;
	}
	return count;
}

int reverseString()
{
	char sentence[] = " I love Programming very much";
	reverseStrings(sentence,strlen(sentence));
	return 0;
	
}