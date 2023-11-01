#pragma once
#include "nodes.h"
// sweeney's hand-rolled singly linked list.
//
// pos = "position".
// ptr = "pointer".
//
// error codes:
// 0	no error.
// 1	list is nullptr.
// 2	ptr is nullptr.
// 5	list has only one node.
// -1	pos/ptr not in list.
// -2	no action needed.
class sList
{
private:
	node* init(int data);
public:
	int addNodeFront(node** list, int data);
	int addNodeBack(node** list, int data);
	int addNodeByPos(node** list, int pos, int data);
	int deleteNodeFront(node** list);
	int deleteNodeBack(node** list);
	int deleteNodeByPos(node** list, int pos);
	int deleteNodeByPtr(node** list, node* ptr);
	int deleteBeforePos(node** list, int pos);
	int deleteBeforePtr(node** list, node* ptr);
	int deleteAfterPos(node** list, int pos);
	int deleteAfterPtr(node** list, node* ptr);
	int returnPtrByPos(node* list, int pos, node* &ptr);
	int returnPosByPtr(node* list, int &pos, node* ptr);
	int returnFrontData(node* list, int &data);
	int returnBackData(node* list, int &data);
	int returnDataByPos(node* list, int &data, int pos);
	int returnDataByPtr(node* list, int &data, node* ptr);
	int updateDataByPos(node* list, int data, int pos);
	int updateDataByPtr(node* list, int data, node* ptr);
	int findDataReturnPos(node* list, int data, int &pos);
	int findDataReturnPtr(node* list, int data, node* &ptr);
	int findMinReturnPos(node* list, int &min, int &pos);
	int findMinReturnPtr(node* list, int &min, node* &ptr);
	int findMaxReturnPos(node* list, int &max, int &pos);
	int findMaxReturnPtr(node* list, int &max, node* &ptr);
	int findMidReturnPos(node* list, int &pos);
	int findMidReturnPtr(node** list, node* &ptr);
	int findTailReturnPos(node* list, int &pos);
	int findTailReturnPtr(node* list, node* &ptr);
	int movePosToFront(node** list, int pos);
	int movePosToBack(node** list, int pos);
	int movePtrToFront(node** list, node* ptr);
	int movePtrToBack(node** list, node* ptr);
	int movePosUp(node** list, int pos);
	int movePtrUp(node** list, node* ptr);
	int movePosDown(node** list, int pos);
	int movePtrDown(node** list, node* ptr);
	int clear(node** list);
	int isEmpty(node* list);
	int size(node* list, int &nodeCount);
	int print(node* list);
	int reverse(node** list);
	int swap(node** list, node* ptr1, node* ptr2);
	int shuffle(node** list);
	int bubbleSort(node** list, bool isAscending);
	int selectionSort(node** list, bool isAscending);
};