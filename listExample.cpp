#include <iostream>
#include <list>
using namespace std;

//iterator
// list<type>::iterator iterator_name;

typedef list<int>::iterator ListIterator;

void print(list<int> list){
	for (ListIterator iter = list.begin(); iter != list.end(); iter++){
		cout <<*iter<< endl;
	}
	cout<<"\n---------------------------------------------------------\n";
}

int main(int argc, char const *argv[])
{
	std::list<int> integer_list;

	//Like the vector class, the list class includes the push_back and push_front functions, which add new elements to the front or back of the list respectively. 

	integer_list.push_front(1);
	integer_list.push_front(2);
	integer_list.push_back(3);

	print(integer_list);
	//Correspondingly, it is possible to remove the front or back element using the pop_front() or pop_back() functions.

	//insert element in middle
	ListIterator it = integer_list.begin();
	++it;  // it points now to number 2

	integer_list.insert (it,10);      
	print(integer_list);

	//Lists can also be sorted using the sort function
	integer_list.sort();
	print(integer_list);

	//Lists can be reversed using
	integer_list.reverse();
	print(integer_list);
	
	//Remove
	 integer_list.remove(2);
	 print(integer_list);
	 
	return 0;
}