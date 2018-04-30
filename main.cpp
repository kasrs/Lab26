/******************************************************************************
 * AUTHORS    : Zac Campos & Kasra Tabib
 * LAB #26    : Enumerated Types
 * CLASS      : CS1A
 * SECTION    : MW - 8am
 * DUE DATE   : 4/30/18
 ******************************************************************************/

#include "header.h"

/******************************************************************************
 * ENUMERATED TYPES
 * ----------------------------------------------------------------------------
 * this program receives a season from the user and it outputs the citrus fruit
 * that is ripe in that season using enumerated types. the program shows the
 * user a menu with different seasons and the letter that represents each
 * and asks the user to enter a specific season to get an answer.
 * ----------------------------------------------------------------------------
 * INPUT:
 * 	 season		: the season that user chooses
 *
 * OUTPUT:
 * 	 fruit		: the citrus fruit that is ripe in that season
 ******************************************************************************/
int main()
{
	// Variable Declaration
	Season currentSeason;	// IN & CALC - the current season
	char season;			// IN & CALC - the letter that represents a season

	/**************************************************************************
	 * INPUT - this function receives the current season from the user by
	 * 			showing them a table with the different season choices that
	 * 			they can choose from.
	 *************************************************************************/
	season = GetSeason();

	/**************************************************************************
	 * PROCESSING - this function converts the single character entered into
	 * 				its corresponding season.
	 **************************************************************************/
	currentSeason = ConvertCharToSeason(currentSeason);




	return 0;
}
