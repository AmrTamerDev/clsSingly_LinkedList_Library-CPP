#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsSinglyLinkedList
{
private:
	struct Node
	{
		T Data;
		Node* Next;
	};

	Node* Head;

	Node* Find(Node* Head, T Value)
	{
		while (Head != NULL)
		{
			if (Head->Data == Value)
				return Head;
			Head = Head->Next;
		}

		return NULL;
	}

public:

	clsSinglyLinkedList()
	{
		Head = NULL;
	}

	void InsertAtBeginning(T Value)
	{
		Node* newNode = new Node();

		newNode->Data = Value;
		newNode->Next = Head;

		Head = newNode;
	}

	void InsertAtAfter(T ValuePrev, T Value)
	{
		if (Head == NULL)
		{
			cout << "the given previous node cannot be NULL";
			return;
		}

		Node* FindNode = Find(Head, ValuePrev);

		if (FindNode)
		{
			Node* NewNode = new Node();
			NewNode->Data = Value;
			NewNode->Next = FindNode->Next;
			FindNode->Next = NewNode;
		}
		else
		{
			cout << "Number Before Not Found\n";
		}
	}

	void InsertAtEnd(T Value)
	{
		Node* newNode = new Node();

		newNode->Data = Value;
		newNode->Next = NULL;

		if (Head == NULL)
		{
			Head = newNode;
			return;
		}

		Node* LastNode = Head;

		while (LastNode->Next != NULL)
		{
			LastNode = LastNode->Next;
		}

		LastNode->Next = newNode;
	}

	void DeleteNode(T ValueDelete)
	{
		if (Head == NULL)
		{
			return;
		}

		Node* CurrentNode = Head, * PrevNode = Head;

		if (CurrentNode->Data == ValueDelete)
		{
			Head = CurrentNode->Next;
			delete CurrentNode;
			return;
		}

		while (CurrentNode != NULL && CurrentNode->Data != ValueDelete)
		{
			PrevNode = CurrentNode;
			CurrentNode = CurrentNode->Next;
		}

		if (CurrentNode == NULL) return;

		PrevNode->Next = CurrentNode->Next;
		delete CurrentNode;
	}

	void DeleteFirstNode()
	{
		if (Head == NULL)
			return;
		Node* DeleteNode = Head;

		Head = Head->Next;
		delete DeleteNode;
	}

	void DeleteLastNode()
	{
		if (Head == NULL) return;

		Node* DeleteNode = Head, * PrevNode = Head;

		if (DeleteNode->Next == NULL)
		{
			Head = NULL;
			delete DeleteNode;
			return;
		}

		while (DeleteNode->Next != NULL)
		{
			PrevNode = DeleteNode;
			DeleteNode = DeleteNode->Next;
		}

		PrevNode->Next = NULL;
		delete DeleteNode;
	}

	void PrintNode()
	{
		cout << "\n";
		Node* Temp = Head;
		while (Temp != NULL)
		{
			cout << Temp->Data << " ";
			Temp = Temp->Next;
		}
		cout << "\n";
	}

	~clsSinglyLinkedList()
	{
		while (Head != NULL)
		{
			Node* Temp = Head;
			Head = Head->Next;
			delete Temp;
		}
	}

};

