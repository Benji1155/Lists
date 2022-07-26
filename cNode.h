#pragma once

class cNode
{
	//protected so they are automatically avaible to classes
protected:
	int mKey;
	float mValue;
	cNode* mNext;

public:
	//contructor
	cNode(int key);
	//destructor
	~cNode();

	//returns key as an int
	int GetKey();


	//sets the value
	void SetValue(float Value);

	//returns value
	float GetValue();


	//sets the next pointer
	void SetNext(cNode* Next);

	//gets the next node pointer
	cNode* GetNext();



};