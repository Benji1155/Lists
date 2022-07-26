#include "cNode.h"
#include <iostream>
using namespace std;

int main()
{
}
//accessing cNode
cNode::cNode(int Key)
{
	mKey = Key;
	mNext = 0;
}

//Destructor
cNode::~cNode()
{

}

int cNode::GetKey()
{
	return mKey;
}

void cNode::SetValue(float Value)
{
	mValue = Value;
}

float cNode::GetValue()
{
	return mValue;
}

void cNode::SetNext(cNode* Next)
{
	mNext = Next;
}

cNode* cNode::GetNext()
{
	return mNext;
}