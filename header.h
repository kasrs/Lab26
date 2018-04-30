#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//seasons array
string Seasons[] =
{
		"Winter", "Spring", "Summer", "Fall"
};

//fruits array
string Fruits[] =
{
		"Kishu Mini Mandarin",
		"Blood Orange",
		"Lane Navel Orange",
		"Star Ruby Red Grapefruit"
};

//enumerated type seasons
enum Season
{
	WINTER,
	SPRING,
	SUMMER,
	FALL
};

/******************************************************************************
* GetSeason
*	This function provides a menu to the user with their choices of
*	different seasons and prompts them to type in a specific season. This
*	function can handle both upper and lower case letters, and it will return
*	a character that represents one of the seasons.
*
* => returns season
******************************************************************************/
char GetSeason();

/******************************************************************************
 * ConvertCharToSeason
 * 	This function converts a character to the enumerated type season and
 * 	returns a variable of type seasons.
 *
 * => returns season
 *****************************************************************************/
Season ConvertCharToSeason(char season);

/******************************************************************************
 * ConvertSeasonToString
 * 	This function converts the enumerated type season to a string representing
 * 	the season and returns a variable of type string.
 *
 * => returns seasons
 *****************************************************************************/
string ConvertSeasonToString(Season currentSeason);

/******************************************************************************
 * ConvertSeasonToFruit
 * 	This function converts the enumerated type seasons to a string representing
 * 	the fruit, and returns a variable of type string.
 *
 * => returns fruits
 *****************************************************************************/
string ConvertSeasontoFruit(Season currentSeason);


#endif /* HEADER_H_ */
