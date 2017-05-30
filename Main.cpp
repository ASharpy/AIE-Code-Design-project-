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

	List<int>::Iterator foo;
	int i = 1;
	for (foo = L1.begin(); foo != L1.end(); foo++)
	{
	
		     if (*foo != i)
			{
				std::cout << "The list did not push back properly" << std::endl;
				return false;
		}
			 i++;
	}

	if (L1.getSize() != 5)
	{
		std::cout << "Size is not correct";
		return "false";
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
	for (foo = L2.begin(); foo != L2.end(); foo++)
	{

		if (*foo != j)
		{
			std::cout << "The list did not push front properly" << std::endl;
			return false;
		}
		j--;
	}

	if (L2.getSize() != 5)
	{
		std::cout << "Size is not correct";
		return "false";
	}


/*************************************************************************************
**************************************************************************************
								insert test
**************************************************************************************
**************************************************************************************/
	List<int> L3;
	L3.pushBack(1);
	L3.pushBack(2);
	L3.pushBack(3);
	L3.pushBack(4);
	L3.pushBack(5);


	List<int>::Iterator foobar = L3.begin();

	L3.insert(2, 26);

	foobar += (2);

	if ( *foobar != 26)
	{
		std::cout << "Did not insert properly" << std::endl;
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