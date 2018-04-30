/******************************************************************************
 * AUTHORS    : Zac Campos & Kasra Tabib
 * LAB #26    : Enumerated Types
 * CLASS      : CS1A
 * SECTION    : MW - 8am
 * DUE DATE   : 4/30/18
 ******************************************************************************/

#include "header.h"

/******************************************************************************
 * FUNCTION - ConvertSeasonToFruit
 * ---------------------------------------------------------------------------
 * 	This function converts the enumerated type seasons to a string representing
 * 	the fruit, and returns a variable of type string.
 *
 * => returns fruits
 * ---------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	the following variables need a pre-defined value passed in
 * 		currentSeason
 *
 * POST-CONDITIONS
 * 	the function returns fruits
 *****************************************************************************/
string ConvertSeasontoFruit(Season currentSeason)
{
	//uses the current season as index in the fruit array
	return Fruits[currentSeason];
}
