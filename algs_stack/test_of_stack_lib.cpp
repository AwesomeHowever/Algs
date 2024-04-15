#include <iostream>
#include "algs_stack.h"


using namespace std;
using namespace Algs::structs_of_data;

int main()
{
	stack<int> T1;
	T1.push(9);
	T1.push(8);
	T1.push(7);
	T1.push(6);
	T1.push(5);
	T1.push(4);
	T1.push(3);
	T1.push(2);
	T1.push(1);
	T1.push(0);
	T1.pop();
	cout << T1.top();

	return 0;
}
