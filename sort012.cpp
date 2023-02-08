
#include<bits/stdc++.h>
using namespace std;


void sort012(int a[], int n)
{
    int count1 = (int)n/2;
    int count0 = 0;
    int high = n-1;
    int index = 0;
    while(index <n)
    {
    	switch(a[index])
    	{
    		case 0: count0++;
    				break;
			case 1 : count1++;
					break;
			case 2: count2++;
					break;						    					
		}
	}
while (mid <= hi) {
        switch (a[mid]) {

        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;

        // If the element is 1 .
        case 1:
            mid++;
            break;

        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    
  }
  int main()
  {
  		int n;
  		cin>>n;
  	    int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

		sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
    }