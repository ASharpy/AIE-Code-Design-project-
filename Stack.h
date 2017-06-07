#pragma once
#include <conio.h>
template<class T>
class Stack
{
public:
	const int MAX = 10;
	T obj;
	T topObj;
	int top;

	T myArray[MAX];
	Stack()
	{ 
		for (int i = 0; i < MAX; i++)
		{
			T myArray[i] = NULL;
		}
	}

	~Stack() {};

	top = -1;

	void push(T value)
	{
		top++
			if (top<MAX)
			{
				myArray[top] = value;
			}
			else
			{
				throw("outside of stack bounds");
			}
	}
	
};
