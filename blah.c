#include <stdio.h>
#include <time.h>

// Creating the list
struct Node
{
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;

// Prototyped Functions
int Amount(int);
void Insert(int);
void Print();
int Choice(int);


void main()
{
	srand(time(NULL));
	head = NULL;

	int n = 0;
	n = Amount(n);
	
	// using n to generate values, and x is the random value
	int i, x, y;
	for (i = 0; i < n; i++)
	{
		x = rand() % 100;
		//Insert(x);
		//Print(x);
	}

	int select = 0;
	select = Choice(select);

	if (select == 3)
	{
		
	}







	//clearing
	int *heap_ptr;
	int *temp_ptr;
	int *final_ptr;
	temp_ptr = (int*)malloc(1);
	heap_ptr = temp_ptr;
	free(temp_ptr);

	final_ptr = (int*)malloc(1);
	printf("%s\n", (final_ptr - heap_ptr) ? "Memory Problem" : "No Problem");
	free(final_ptr);


}



int Amount(int n)
{
	printf("Enter a amount of numbers to generate: ");
	scanf_s("%d", &n);
	return n;

}
void Insert(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	head = temp;

}
void Print()
{
	struct Node* temp = head;
	while (temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	//printf("\n");
}
int Choice(int select)
{
		printf("\nPress 1 to add a number to the list \n");
		printf("Press 2 to delete all occurrences of a number from the list\n");
		printf("Press 3 to print in ascending order\n");
		printf("Press 4 to print in decending order\n");
		printf("Press 5 to exit");
		printf("\nEnter your selection: ");
		scanf_s("%d", &select);
		return select;
	
}




