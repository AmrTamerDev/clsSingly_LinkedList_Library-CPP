#include <iostream>
#include "clsSinglyLinkedList.h"

using namespace std;

int main()
{
	clsSinglyLinkedList <int> linked1;
	linked1.InsertAtBeginning(1);
	linked1.InsertAtBeginning(2);
	linked1.InsertAtBeginning(3);
	linked1.InsertAtBeginning(4);
	linked1.InsertAtBeginning(5);
	linked1.PrintNode();

	linked1.InsertAtAfter(2, 600);
	linked1.PrintNode();

	linked1.InsertAtEnd(500);
	linked1.PrintNode();

	linked1.DeleteNode(2);
	linked1.PrintNode();

	linked1.DeleteFirstNode();
	linked1.PrintNode();

	linked1.DeleteLastNode();
	linked1.PrintNode();
}