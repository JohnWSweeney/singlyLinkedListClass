#pragma once
#include <iostream>

struct node
{
	int data;
	node* next = nullptr;
};

struct dNode
{
	int data;
	dNode* next = nullptr;
	dNode* prev = nullptr;
};