/******************************************************************************
 * AUTHORS    : Zac Campos & Kasra Tabib
 * LAB #26    : Enumerated Types
 * CLASS      : CS1A
 * SECTION    : MW - 8am
 * DUE DATE   : 4/30/18
 ******************************************************************************/

#include "header.h"

/******************************************************************************
* FUNCTION - GetSeason
* -----------------------------------------------------------------------------
*	This function provides a menu to the user with their choices of
*	different seasons and prompts them to type in a specific season. This
*	function can handle both upper and lower case letters, and it will return
*	a character that represents one of the seasons.
*
* => returns season
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
* 	nothing needs a pre-defined value passed in
*
* POST-CONDITIONS
* 	=> returns seasons
******************************************************************************/
char GetSeason()
{
	//Variable Declaration
	char season;			// IN & CALC - the season entered
	bool invalid = false;	// CALC		 - boolean expression to error check
							//			   input

	//Outputs a menu with the different choices the user has
	cout << "********************\n";
	cout << "   Fruit Selector   \n";
	cout << "********************\n";
	cout << "(W) Winter\n";
	cout << "(S) Spring\n";
	cout << "(U) Summer\n";
	cout << "(F) Fall\n";
	cout << "(X) Exit";

	//error checks for the input for season
	do
	{
		cout << endl;
		cout << "What season is it? ";
		cin  >> season;
		season = toupper(season);
		cin.ignore(1000, '\n');

		invalid = !(season == 'W' || season == 'S' || season =='U' ||
				   season == 'F' || season == 'X');

		//error message for invalid input
		if(invalid)
		{
			cout << endl;
			cout << "*** INVALID INPUT - Please input a W, S, U, F or X ***";
			cout << endl;
		}

	}while(invalid);

	return season;
}
