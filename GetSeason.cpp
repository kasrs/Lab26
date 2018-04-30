/******************************************************************************
 * AUTHORS    : Zac Campos & Kasra Tabib
 * LAB #26    : Enumerated Types
 * CLASS      : CS1A
 * SECTION    : MW - 8am
 * DUE DATE   : 4/30/18
 ******************************************************************************/

#include "header.h"

char GetSeason()
{
	char season;
	bool invalid = false;

	cout << "********************\n";
	cout << "   Fruit Selector   \n";
	cout << "********************\n";
	cout << "(W) Winter\n";
	cout << "(S) Spring\n";
	cout << "(U) Summer\n";
	cout << "(F) Fall\n";
	cout << "(X) Exit";

	do
	{
		cout << endl;
		cout << "What season is it? ";
		cin  >> season;
		season = toupper(season);
		cin.ignore(1000, '\n');

		invalid = !(season == 'W' || season == 'S' || season =='U' ||
				   season == 'F' || season == 'X');

		if(invalid)
		{
			cout << endl;
			cout << "*** INVALID INPUT - Please input a W, S, U, F or X ***";
			cout << endl;
		}

	}while(invalid);

	return season;
}

