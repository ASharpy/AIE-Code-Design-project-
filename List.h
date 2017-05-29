#pragma once
template<class T>
class List
{
private:

	class ListNode
	{
	public:
		ListNode()
		{
			Next = nullptr
			Previous = nullptr;
		}
		~ListNode()
		{
			Next = nullptr;
			Previous = nullptr;
		}

	private:
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

	void pushFront(const T & value);
	void pushBack(const T & value);
	void insert(float element , const T & value);
	void popFront();
	void popBack();
	//void erase(T);
	//void remove(T);
	//T first();
	//T last();
	//T begin();
	//T end();





};

template<class T>
inline void List<T>::pushFront(const T & value)
{
	
	if (m_eleNum == 0)
	{
		m_first->obj = value;
	}
	else
	{
		ListNode * N = new ListNode()

		N->previous = nullptr;

		N->Next = m_first;

		m_first->previous = N;

		m_first = N;
    	
		m_first->obj = value;
	}
	m_eleNum++;
}


template<class T>
inline void List<T>::pushBack(const T & value)
{
	if (m_eleNum == 0)
	{
		m_last->obj = value;
	}
	else
	{
		ListNode * N = new ListNode()

		N->Next = nullptr;

		N->previous = m_last;

		m_last->m_next = N;

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
		delete m_first;
		m_eleNum--;

	}
	else
	{
	
		ListNode * holder = m_first->next;
	
		delete m_first;

		holder->previous = nullptr;
		
		m_first = holder;
		
		m_eleNum--;
	}
	
}

template<class T>
inline void List<T>::popBack()
{

	if (m_eleNum == 1)
	{
		delete m_last;
		m_eleNum--;

	}
	else
	{

		ListNode * holder = m_last->previous;

		delete m_last;

		holder->next = nullptr;

		m_last = holder;

		m_eleNum--;
	}
}



template<class T>
inline void List<T>::insert(float element, const T & value)
{



	for (int i = 0; i < m_eleNum; i++)
	{

	}

}