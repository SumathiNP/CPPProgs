 #include <iostream>
using namespace std;
int insertionsort(int arr[],int count);
// Not working 
void shellsort(int arr[], int count)
{
	
	int interval = 0;
	interval = int(count/3)+1;
	bool swap = false;

	while(interval >0)
	{
		cout<<"\n"<<"Interval "<<interval;
	
		int index = 0;
		while(index < count && (index + interval) < count)
		{
			
			if(arr[index] > arr[index+interval])
			{
				cout<<"Swapping "<<index<<" Numbers "<<arr[index]<<" "<<arr[index+interval];
				int temp= arr[index];
				arr[index] = arr[index+interval];
				arr[index+interval]= temp;
				cout<<"Swapped "<<index<<" Numbers "<<arr[index]<<" "<<arr[index+interval];
				swap = true;
			}
			index++;
		}
		cout<<"\nAfter Iteration with interval "<<interval<<"\n";
		for(int i=0;i<count;i++)
			cout<<arr[i]<<"\t";
		if(interval == 1)
		{
			insertionsort(arr,10);
		}
		interval = (int)interval/2;
	}
	return;	
}
int partition(int arr[], int l, int r)
{
	if(l>=r)
		return 0;
	int leftindex= l;
	int rightindex = r;
	int pivot = r;
	while(leftindex < rightindex)
	{
		while(arr[leftindex]< arr[pivot])
		{
			leftindex++;		
		}
		while(arr[rightindex] >arr[pivot])
		{
			rightindex++;
		}
		if(left < right )
		{
			if( arr[rightindex] < arr[leftindex] ) 
			{
				int temp = arr[leftindex];
				arr[leftindex]= arr[rightindex];
				arr[rightindex]= temp;
				
			}
		}
		else 
			break;
	}
	pivot = leftindex;
	return pivot;
}
int quicksort(int arr[], int l, int r)
{
	int pivot=0;
	if(l<r)
	{	
		pivot = partition(arr, l, r);
		cout<<" Iteration <<l<<" "Pivot "<<pivot;
		quicksort(arr,l, pivot-1 );
		quicksort(arr,pivot,r);
	}	
		
	return 0;
		
}
int insertionsort(int arr[],int count)
{

	int iteration = 0;
	//int sortedindex =0;
	int i,j;
	
	for(int index=1;index<count;index++)
	{
		iteration++;
		int pos = index-1;
		int swapindex =0;
		int key=arr[index];
		bool swap = false;
		while(pos >=0  ) 
		{
		//  && arr[pos]> key)
			if(arr[pos]>key)
			{
				swap = true;
				arr[pos+1]=arr[pos];
				swapindex = pos;
			}
			if (pos==0)
				break;	
				
			if(pos>0)
				pos--;					
				
		}
		if(swap)
			arr[swapindex]=key;

//		sortedindex++;
		swap = false;
	}

	cout<<" Sorting took "<<iteration<<" iterations ";
	for(i=0;i<count;i++)
		cout<<arr[i]<<"\t";
	return 0;	
}
int bubblesort(int arr[], int count)
{
	int i, j;
	int iteration = 0;
	int temp;

	bool swap = true;
	
	do
	{
		iteration ++;
		swap = false;
		for(i=0;i<count-2;i++)
		{
			
			j= i+1;
			if(arr[i]>arr[j])
			{
				temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				swap = true;
			}
		}
	}while(swap);

	cout<<" Sorting took "<<iteration<<" iterations ";
	for(i=0;i<count;i++)
		cout<<arr[i]<<"\t";
	return 0;
}

/*int main(int argc, char *argv[])
{
	int arr[10]={34,21,67,45,66,23,78,56,79,97};
	
	shellsort(arr,10);
	//quicksort(arr,0,9);

	for(int i=0;i<10;i++)
		cout<<arr[i]<<"\t";
	
	//bubblesort(arr,10);
	//insertionsort(arr,10);
}*/