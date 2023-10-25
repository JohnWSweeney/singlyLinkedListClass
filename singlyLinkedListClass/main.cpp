#include <iostream>
#include "nodes.h"
#include "sList.h"

int main()
{
	std::cout << "Singly Linked List Class v1.0.0\n\n";
	int result;
	int nodeCount;
	int data;
	int position;
	node* list = nullptr;
	node* ptr = nullptr;

	sList slist;

	list = slist.init(1234);
	for (int i = -5; i < 5; i++)
	{
		slist.addNodeBack(list, pow(i, 4));
	}
	result = slist.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		slist.print(list);
	}
	else
	{
		std::cout << "List is empty.\n";
	}
	/// test code here: ////////////////////////////////////////
	result = slist.shuffle(&list);
	std::cout << "result: " << result << "\n\n";
	////////////////////////////////////////////////////////////
	result = slist.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		slist.print(list);
	}
	else if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
}