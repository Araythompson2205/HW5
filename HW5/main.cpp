// Participants: Gabriela Lopez, Andrew Thompson, Long Duong, Christopher Gomez, Gia Minh Hoang, Duyen Tran and Lincoln Nguyen
// Date: 03-16-21
// Description: Chapter 5 Solution

#include "input.h"
#include "vector.h"
#include "list.h"
#include "student.h"
#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include "ListContainer.h"

using namespace std;

//Precondition: N/A
//Postcondition: Prints menu and returns user int option selected
int menuOption();
void tester();

char menu2();
void part2();

int main()
{
	do
	{
		switch (menuOption())
		{
		case 0:  exit(0);
		case 1:  system("cls"); /*vector();*/ break;
		case 2:  system("cls"); part2(); break;//tester(); break;
		case 3:  system("cls"); /*vector/list();*/ break;
		default: cout << "\t\t    ERROR-Invalid Option. Please re-enter."; break;
		}
		cout << '\n';
		system("pause");
	} while (true);
	return 0;
}

int menuOption()
{
	system("cls");
	cout << '\n';
	cout << '\t' << char(201) << string(42, char(205)) << char(187) << '\n';
	cout << '\t' << char(186) << "    \t    CMPR131: Chapter 5             " << char(186) << '\n';
	cout << '\t' << char(186) << "      \t\t  Made by:                 " << char(186) << '\n';
	cout << '\t' << char(186) << " - Gabriela Lopez\t- Andrew Thompson  " << char(186) << '\n';
	cout << '\t' << char(186) << " - Lincoln Nguyen\t- Long Duong       " << char(186) << '\n';
	cout << '\t' << char(186) << " - Christopher Gomez\t- Gia Minh Hoang   " << char(186) << '\n';
	cout << '\t' << char(186) << " - Duyen Tran                             " << char(186) << '\n';
	cout << "\t" << char(204) << string(42, char(205)) << char(185) << "\n";
	cout << "\t" << char(186) << "   1: Vector Container                    " << char(186) << "\n";
	cout << "\t" << char(186) << "   2: List Container                      " << char(186) << "\n";
	cout << "\t" << char(186) << "   3: Aplication using Vector or List Container(?)   " << char(186) << "\n";
	cout << "\t" << char(199) << string(42, char(196)) << char(182) << "\n";
	cout << "\t" << char(186) << "   0: Exit                                " << char(186) << "\n";
	cout << "\t" << char(200) << string(42, char(205)) << char(188) << "\n";

	int option = inputInteger("\t    Option: ", 0, 3);
	cin.clear();
	return option;
}

void tester() /*******************************************************************************************************/
{
	cout << "\nTESTING LIST\n";
	
	student student1, student2;
	LinkedList CMPR131;
	//CMPR131.push_back(student1);
	//CMPR131.push_back(student1);
	//CMPR131.push_back(student2);
	//CMPR131.display();
}

char menu2()
{
	system("cls");
	cout << "\n\tA. Clear() - Destroys all elements from the list\n";
	cout << "\tB. Resize(n) - Changes the list so that it contains n elements\n";
	cout << "\tC. Read input.dat and push_front(e) - Adds a new element at the front of the list\n";
	cout << "\tD. pop_front() - Deletes the first element\n";
	cout << "\tE. front() - Accesses the first element\n";
	cout << "\tF. Read input.dat and push_back(e) - Adds a new element at the end of the list\n";
	cout << "\tG. pop_back() - Delete the last element\n";
	cout << "\tH. back() Accesses the last element\n";
	cout << "\tI. begin() - Returns an iterator refereing to the first element in the list\n";
	cout << "\tJ. end() Returns an iterator referring to the past-the-end element in the list\n";
	cout << "\tK. Using iterator begin() and end() returns all elements in the list\n";
	cout << "\tL. rbegin() - Returns a reverse iterator pointing to the last element in the list\n";
	cout << "\tM. rend() - Returns a reverse iterator pointing to the element preceding the first element in the list\n";
	cout << "\tN. Using iterator rbegin() and rend() returns all elements in the list\n";
	cout << "\tO. erase(it) - Removes from the vector a single element(using an iterator)\n";
	cout << "\tP. erase(start_it,end_it) - Removes from the vector a range of elements( using iterators)\n";
	cout << "\tQ. insert(it, entry) - Insert a new entry at the iterator.\n";
	cout << "\tR. swap() - Exchanges the content of the container by another list's content of the same type\n";
	cout << "\tS. Sort - Sorts the list.\n";
	cout << "\t0. return\n";

	string str = "abcdefghijklmnopqrs0";
	char option = inputChar("\tOption: ", str);

	return option;
}

void part2()
{
	char option;
	ListContainer test;

	while (true)
	{
		option = menu2();

		switch (tolower(option))
		{
		case '0':break;
		case 'a': test.clear(); break;
		case 'b': test.resize(); break;
		case 'c':test.readFront(); break;
		case 'd':test.pop_Front(); break;
		case 'e':test.front(); break;
		case 'f':test.readEnd(); break;
		case 'g':test.pop_Back(); break;

		default: cout << "\t\t    ERROR-Invalid Option. Please re-enter."; break;

		}
		if (option == '0')
			break;
		cout << "\n\n";
		system("pause");
	}
}