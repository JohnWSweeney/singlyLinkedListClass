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
	int addFront(node** list, int data);
	int addBack(node** list, int data);
	int addByPos(node** list, int pos, int data);
	int deleteFront(node** list);
	int deleteBack(node** list);
	int deletePos(node** list, int pos);
	int deletePtr(node** list, node* ptr);
	int deleteBeforePos(node** list, int pos);
	int deleteBeforePtr(node** list, node* ptr);
	int deleteAfterPos(node** list, int pos);
	int deleteAfterPtr(node** list, node* ptr);
	int returnPosPtr(node* list, node* &ptr, int pos);
	int returnPtrPos(node* list, int &pos, node* ptr);
	int returnFrontData(node* list, int &data);
	int returnBackData(node* list, int &data);
	int returnPosData(node* list, int &data, int pos);
	int returnPtrData(node* list, int &data, node* ptr);
	int updatePosData(node* list, int pos, int data);
	int updatePtrData(node* list, node* ptr, int data);
	int returnDataPos(node* list, int data, int &pos);
	int returnDataPtr(node* list, int data, node* &ptr);
	int returnMinPos(node* list, int &min, int &pos);
	int returnMinPtr(node* list, int &min, node* &ptr);
	int returnMaxPos(node* list, int &max, int &pos);
	int returnMaxPtr(node* list, int &max, node* &ptr);
	int returnMidPos(node* list, int &pos);
	int returnMidPtr(node** list, node* &ptr);
	int returnTailPos(node* list, int &pos);
	int returnTailPtr(node* list, node* &ptr);
	int movePosFront(node** list, int pos);
	int movePosBack(node** list, int pos);
	int movePtrFront(node** list, node* ptr);
	int movePtrBack(node** list, node* ptr);
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