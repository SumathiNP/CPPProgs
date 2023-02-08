 //{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


// } Driver Code Ends
//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        int count= 1;
        Node* current = head;
        Node* prev = current;
   
   		if(m >1)
		{
			while(count<m)
	        {
	            prev = current;
	            current = current->next;
	            count++;
	        }
		}
        
        Node *firstnode = prev;
  
    	Node* begin = current;
        prev = current;	          
        current = firstnode->next;
 
 		count = n-m+1;
  		int index = 1;
        Node* nextNode = current->next;

   
        while(index <= count)
        {
			if(head == begin && index == count)
				break;
        	nextNode = current->next;
        	current->next= prev;
			prev = current;

        	current = nextNode;
            index++;
        }
		
		if(count == 1)
			return head;

        begin->next = nextNode;   
        if( head == begin)
        {
	        head = prev;
		}
		else
			firstnode->next = prev;
        

        return head;
    }
};

//{ Driver Code Starts.


// Driver program to test above functions
int main()
{
	int T = 1;
	//cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N;
		 cin>>m; cin>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		
		//printList(head);
		
        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}
      
       