#pragma once

class Node
{
public:
	int data;
	Node* next;

	Node(int value)
	{
		data = value;
		next = nullptr;
	}

	~Node()
	{
		if (next != nullptr)
			delete next;
	}
};
