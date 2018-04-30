#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string Seasons[] =
{
		"Winter", "Spring", "Summer", "Fall"
};

string Fruits[] =
{
		"Kishu Mini Mandarin",
		"Blood Orange",
		"Lane Navel Orange",
		"Star Ruby Red Grapefruit"
};

enum Season
{
	WINTER,
	SPRING,
	SUMMER,
	FALL
};

char GetSeason();

Season ConvertCharToSeason(char season);

string ConvertSeasonToString(Season currentSeason);

string ConvertSeasontoFruit(Season currentSeason);


#endif /* HEADER_H_ */
