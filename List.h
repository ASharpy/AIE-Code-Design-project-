#pragma once
#include <iostream>
template<class T>
class List
{
private:

	class ListNode
	{
	public:
		/*
		Listnode Constructor sets the next and previous pointers to nullptr to make sure they arnt pointing to garbage
		no returns
		*/
		ListNode()
		{
			Next = nullptr;
			Previous = nullptr;
		}

		/*
		List Node Copy Constructor creates a new objects when the list node is created
		@param newobj the object being created
		no returns
		*/
		ListNode(T newobj)
		{
			Next = nullptr;
			Previous = nullptr;
			obj = newobj;
		}
		
		~ListNode()
		{
		}

		/*
		Pointers pointing to the next and previous objects in the list.
		*/
		ListNode * Next;
		ListNode * Previous;
		T obj;

	};

	/*
	The first and last objects of the list
	*/
	ListNode * m_first;
	ListNode * m_last;

	//Number of elements in the list
	float m_eleNum = 0;


public:
	class Iterator
	{
	public:
		Iterator() {};

		/*
		Iterator copy Constructor creates copy iterator
		@param other another iterator
		no returns
		*/
		Iterator(const Iterator & other) { ptr = other.ptr; };

		~Iterator() {};

		ListNode * ptr;

		/*
		++ operator overloader for going to the next object in the list (ptr++)
		no returns 
		*/
		void operator++(int) { ptr = ptr->Next; };

		/*
		++ operator overloader for going to the next object in the list (++ptr)
		no returns
		*/
		void operator++() { ptr = ptr->Next; };


		/*
		-- operator overloader for going to the previous object in the list (--ptr)
		no returns
		*/
		void operator--() { ptr = ptr->Previous; };

		/*
		-- operator overloader for going to the previous object in the list (ptr--)
		no returns
		*/
		void operator--(int) { ptr = ptr->Previous; };
		
		/*
		+= operator overloader for going to the previous object in the list (--ptr)
		no returns
		*/
		void operator+=(int position)
		{
			for (int i = 1; i < position; i++)
			{
				ptr = ptr->Next;
			}
		};
		
		bool operator!=(const Iterator & other) { return ptr != other.ptr; };

		bool operator==(const Iterator & other) { return ptr == other.ptr; };

		Iterator &operator=(const Iterator & other) { ptr = other.ptr; return *this; };

		T *operator ->()
		{
			return &ptr->obj;
		};

		const Iterator *operator ->()const
		{

			return *this;
		}


		T &operator*() {return ptr->obj; };
	
	};

	Iterator end() 
	{ 
		Iterator temp;
		temp.ptr = nullptr;
		return temp;
	};

	Iterator begin()
	{
		Iterator temp;
		temp.ptr = m_first;
		return temp;
	};

	float getSize() { return m_eleNum; };

	List() {};
	~List() {};

	void pushFront(const T  value);
	void pushBack(const T  value);
	void insert(int element , const T & value);
	void popFront();
	void popBack();
	void deleteList();
	void deletePosition(float position);
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
		m_last = new ListNode(value);
		m_first = m_last;
	}
	else
	{
		ListNode * N = new ListNode();

		N->Next = nullptr;

		N->Previous = m_last;

		m_last->Next = N;

		m_last = N;

		m_last->obj = value;
	}

	m_eleNum++;
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
inline void List<T>::insert(int element, const T & value)
{
	if (element < 0 || element > m_eleNum)
	{
		throw;
	}

	if (element == 0)
	{
		pushFront(value);
	}
	else if (element == m_eleNum)
	{
		pushBack(value);
	}
	else
	{

		List<T>::Iterator holder = begin();

		holder += (element);

		ListNode * N = new ListNode();

		N->Next = (holder.ptr);
		N->Previous = holder.ptr->Previous;

		(holder.ptr)->Previous->Next = N;

		//(holder.ptr)->Next = N;

		N->obj = value;

		m_eleNum++;
	}
	
}

template<class T>
inline void List<T>::deleteList()
{
	int listDel = 0;
	ListNode * Start = m_first;

	for (int i = 0; i < m_eleNum; i++)
	{
		m_first = m_first->Next;

		delete Start;

		Start = m_first;
		listDel++;
	}
	m_eleNum = m_eleNum - listDel;
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

		List<T>::Iterator holder = begin();

		holder += (position);

		(holder.ptr)->Next->Previous = (holder.ptr)->Previous;

		(holder.ptr)->Previous->Next = (holder.ptr)->Next;

		delete holder.ptr;

		m_eleNum--;

	}
}



