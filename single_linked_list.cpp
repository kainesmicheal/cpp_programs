#include<iostream>

struct Node
{
	int data;
	Node* next;
};

Node* head = NULL;

void insert(int value)
{
	Node* newNode = (Node*) malloc(sizeof(Node));
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}
void display()
{
	Node* ptr;
	ptr = head;
	while (!ptr == NULL)
	{
		std::cout << ptr->data << std::endl;
		ptr = ptr->next;
	}
}

int main()
{
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	display();
}