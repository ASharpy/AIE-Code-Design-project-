#pragma once
#include <iostream>
template<class T>
class List
{
private:

	class ListNode
	{
	public:
		ListNode()
		{
			Next = nullptr;
			Previous = nullptr;
		}

		ListNode(T newobj)
		{
			Next = nullptr;
			Previous = nullptr;
			obj = newobj;
		}

		~ListNode()
		{
			Next = nullptr;
			Previous = nullptr;
		}

		ListNode * Next;
		ListNode * Previous;
		T obj;

	};


	ListNode * m_first;
	ListNode * m_last;
	float m_eleNum = 0;
public:
	List() {};
	~List() {};

	void pushFront(const T  value);
	void pushBack(const T  value);
	void insert(float element , const T & value);
	void popFront();
	void popBack();
	void deleteList();
	void deletePosition(float position);
	void printList();
	//void erase(T);
	//void remove(T);
	//T first();
	//T last();
	//T begin();
	//T end();





};

template<class T>
inline void List<T>::pushFront(const T value)
{
	
	if (m_eleNum == 0)
	{
		m_first = new ListNode(value);
		m_last = m_first;
	}
	else
	{
		ListNode * N = new ListNode();

		N->Previous = nullptr;

		N->Next = m_first;

		m_first->Previous = N;

		m_first = N;
    	
		m_first->obj = value;
	}
	m_eleNum++;
}


template<class T>
inline void List<T>::pushBack(const T value)
{
	if (m_eleNum == 0)
	{
		m_last->obj = value;
	}
	else
	{
		ListNode * N = new ListNode()

		N->Next = nullptr;

		N->Previous = m_last;

		m_last->Next = N;

		m_last = N;

		m_last->obj = value;
	}

	m_eleNun++;
}

template<class T>
inline void List<T>::popFront()
{

	if (m_eleNum == 1)
	{
		deleteList();

	}
	else
	{
	
		ListNode * holder = m_first->Next;
	
		delete m_first;

		holder->Previous = nullptr;
		
		m_first = holder;
		
		m_eleNum--;
	}
	
}

template<class T>
inline void List<T>::popBack()
{

	if (m_eleNum == 1)
	{
		deleteList();

	}
	else
	{

		ListNode * holder = m_last->Previous;

		delete m_last;

		holder->Next = nullptr;

		m_last = holder;

		m_eleNum--;
	}
}

template<class T>
inline void List<T>::insert(float element, const T & value)
{
	if (element < 0 || element > m_eleNum)
	{
		throw;
	}

	if (element = 0)
	{
		pushFront(element);
	}
	else if (element == m_eleNum)
	{
		pushBack(element);
	}
	else
	{
		ListNode * holder = m_first;

		for (int i = 0; i < element; i++)
		{
			if (i = element)
			{
				ListNode * N = new ListNode();

				N->Next = holder->Next;
				N->Previous = holder;

				holder->Next->Previous = N;

				holder->Next = N;

				N->obj = value;

				m_eleNum++;
			}
			else
			{
				holder = holder->Next;
			}
		}

	}
}

template<class T>
inline void List<T>::deleteList()
{
	ListNode * Start = m_first;

	for (int i = 0; i < m_eleNum; i++)
	{
		m_first = m_first->Next;

		delete start;

		Start = m_first;
	}

	m_first = nullptr;

	m_last = nullptr;

}

template<class T>
inline void List<T>::deletePosition(float position)
{

	if (position < 0 || position > m_eleNum)
	{
		throw;
	}

	if (position == 0)
	{
		popFront();
	}
	else if (position == m_eleNum)
	{
		popBack();
	}

	else
	{
		ListNode * holder = m_first;

		for (i = 0; i < length; i++)
		{
			if (i == position)
			{
				holder->Next = holder->Previous;

				holder->Previous = holder->Next;

				delete holder;

			}
			else
			{
				holder = holder->Next;
			}
		}

	
	}
}

template<class T>
inline void List<T>::printList()
{
	for (int i = 0; i < m_eleNum; i++)
	{
		std::cout << m_first->obj;

		m_first = m_first->Next;
	}
}

