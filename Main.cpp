#include <iostream>
#include "List.h"

bool  unitTest()
{

/*************************************************************************************
**************************************************************************************
								Push Back test
**************************************************************************************
**************************************************************************************/
	List<int> L1;

	L1.pushBack(1);
	L1.pushBack(2);
	L1.pushBack(3);
	L1.pushBack(4);
	L1.pushBack(5);

	List<int>::Iterator It1;
	int i = 1;
	for (It1 = L1.begin(); It1 != L1.end(); It1++)
	{
	
		     if (*It1 != i)
			{
				std::cout << "The list did not push back properly" << std::endl;
				return false;
		}
			 i++;
	}

	if (L1.getSize() != 5)
	{
		std::cout << "Size is not correct";
		return false;
	}

/*************************************************************************************
**************************************************************************************
								Push Front test
**************************************************************************************
**************************************************************************************/
	List<int> L2;

	L2.pushFront(1);
	L2.pushFront(2);
	L2.pushFront(3);
	L2.pushFront(4);
	L2.pushFront(5);

	int j = 5;
	for (It1 = L2.begin(); It1 != L2.end(); It1++)
	{

		if (*It1 != j)
		{
			std::cout << "The list did not push front properly" << std::endl;
			return false;
		}
		j--;
	}

	if (L2.getSize() != 5)
	{
		std::cout << "Size is not correct";
		return false;
	}


/*************************************************************************************
**************************************************************************************
								insert test before
**************************************************************************************
**************************************************************************************/
	List<int> L3;
	L3.pushBack(1);
	L3.pushBack(2);
	L3.pushBack(3);
	L3.pushBack(4);
	L3.pushBack(5);


	List<int>::Iterator It3 = L3.begin();

	L3.insert(5, 26);

	It3 += (6);

	if ( *It3 != 26)
	{
		std::cout << "Did not insert properly" << std::endl;
		return false;
	}

	if (L3.getSize() != 6)
	{
		std::cout << "Size is not correct";
		return false;
	}



/*************************************************************************************
**************************************************************************************
					insert test before
**************************************************************************************
**************************************************************************************/
	List<int> L4;
	L4.pushBack(1);
	L4.pushBack(2);
	L4.pushBack(3);
	L4.pushBack(4);
	L4.pushBack(5);


	List<int>::Iterator It4 = L4.begin();

	L4.insert(3, 26);

	It4 += (3);

	if (*It4 != 26)
	{
		std::cout << "Did not insert properly" << std::endl;
		return false;
	}

	if (L4.getSize() != 6)
	{
		std::cout << "Size is not correct";
		return false;
	}

/*

	void pushFront(const T  value);
	void pushBack(const T  value);
	void insert(int element, const T & value);
	void popFront();
	void popBack();
	void deleteList();
	void deletePosition(float position);*/






	return true;


}

int main()
{

	if (unitTest())
	{
		std::cout << " All tests passed successfully" << std::endl;
	}
	system("pause");
	return 0;
	
}