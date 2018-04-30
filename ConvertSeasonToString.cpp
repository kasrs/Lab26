/******************************************************************************
 * AUTHORS    : Zac Campos & Kasra Tabib
 * LAB #26    : Enumerated Types
 * CLASS      : CS1A
 * SECTION    : MW - 8am
 * DUE DATE   : 4/30/18
 ******************************************************************************/

#include "header.h"

/******************************************************************************
 * FUNCTION - ConvertSeasonToString
 * ----------------------------------------------------------------------------
 * 	This function converts the enumerated type season to a string representing
 * 	the season and returns a variable of type string.
 *
 * => returns seasons
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	the following need a pre-defined value passed in
 * 		currentSeason
 *
 * POST-CONDITIONS
 * 	the function returns the season in string form
 *****************************************************************************/
string ConvertSeasonToString(Season currentSeason)
{
	//converting the character that represents a season to the full length season
	//name
	return Seasons[currentSeason];
}
