#include <iostream>
#include "List.h"
int main()
{
	List<int> N;

	N.pushBack(1);
	N.pushBack(2);
	N.pushBack(3);
	N.pushBack(4);
	N.pushBack(5);

	N.insert(3,26);

	List<int>::Iterator foo;
	for (foo = N.begin(); foo != N.end(); foo++)
	{
		std::cout << *foo;
	}
	return 0;

}