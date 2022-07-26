#include "cList.h"

cList::cList()
{
	mHead = 0;
	mNodes = 0;
}

cList::~cList()
{
	cNode* ToDelete = mHead;
	while (ToDelete != 0)
	{
		Next = ToDelete->GetNext();
		delete ToDelete;
		ToDelete = Next;
	}
}