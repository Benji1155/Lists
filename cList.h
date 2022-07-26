#pragma once
#include "cNode.h"

class cList
{
protected:
	cNode* mHead;
	int mNodes;
public:
	cList();
	~cList();

	void InsertHead(int Key, float Value);
	void InsertTail(int Key, float Value);
	void InsertBody(int Position, int Key, float Value);
	
	void DeleteHead();
	void DeleteTail();
	void DeleteBody(int Position);

	cNode* GetNode(int Position);
	cNode* FindNode(int Key);

	int NumNodes();
	bool KeyExists(int Key);
};