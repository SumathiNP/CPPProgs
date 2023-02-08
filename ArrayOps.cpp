#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>

int checkcommonprefix(char str1[],char str2[])
{
	int i;
	int count = strlen(str1);
	bool isprefix = true;
	while(isprefix && i< count)
	{
		if(!strncmp(str1,str2,i+1))
		{
			isprefix = true;
			i++;	
		}
		else if(i>0)
		{
			char sample[10];
			strncpy(sample,str1,i);
			cout<<"Prefix is "<<sample;
			break;
		}
		else
		 {
		 	cout<<"No common prefix"<<endl;
		 }
	}
	return 0;
}
int reversestring(char str[])
{
	int i,j;
	int count = strlen(str);
	cout<<"Original String "<<str<<endl;
	for(i=0,j=count-1;i<j;i++,j--)
	{
		int temp = str[j];
		str[j]= str[i];
		str[i] = temp;			
	}
	cout<<"Reverse string  "<<str<<endl;
	
	return 0;
}
int rotatearray(int arr[], int count,int pos)
{
	int *temparray;
	temparray = (int*)malloc(sizeof(int)*pos);
	int i,j;
	for(i=0;i<pos;i++)
		*(temparray+i) = arr[i];
	
	for(i=0,j=pos;i<count-pos;i++,j++)
	{
		arr[i]=arr[j];
	}
	for(i=count-pos,j=0;i<count;i++,j++)
		arr[i]=*(temparray+j); 
	
	cout<<"Rotate array "<<endl;
	for(i=0;i<count;i++)
		cout<<arr[i]<<" ";
	return 0;
}

int reversearray(int arr[], int count)
{
	int i,j;
	cout<<"Original Array "<<endl;
	for(i=0;i<count;i++)
		cout<<arr[i]<<" ";	
	for(i=0,j=count-1;i<j;i++,j--)
	{
		int temp = arr[j];
		arr[j]= arr[i];
		arr[i] = temp;			
	}
	cout<<"Reverse array "<<endl;
	for(i=0;i<count;i++)
		cout<<arr[i]<<" ";

	return 0;
}
int tryarrayops()
{
	int arr[10]= {10,20,5,9,35,45,55,60,65,15};
	//reversearray(arr,10);
	//char str[]="Beautiful World";
	//reversestring(str);
	//rotatearray(arr,10, 3);
	char str1[] = "geeks";
	char str2[]= "geet";
	
	checkcommonprefix(str1,str2);
	return 0;	
}
