#pragma once
#include <conio.h>
#define MAX 10
template<class T>
class Stack
{
public:
	T obj;
	T topObj;
	int top = -1;
	
	T myArray[10];
	for (size_t i = 0; i < length; i++)
	{

	}
	//Stack()
	//{ 
		for (int i = 0; i < 10; i++)
		{
			T myArray[i] = 0;
		}
	//}

	~Stack() {};

	void push(T value)
	{
		top++;
			if (top<MAX)
			{
				myArray[top] = value;
			}
			else
			{
				throw("outside of stack bounds");
			}
	}
	

	T pop()
	{
		if (top == 1)
		{
			throw("Stack is Empty");
			return NULL;

		}
		else
		{
			T data = myArray[top];
			myArray[top] = NULL;
			top--;
			return data;
		}
	}
};
