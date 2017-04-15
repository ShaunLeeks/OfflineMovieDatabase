#include "Movie.h"

using namespace std;

Movie::Movie() {

}

Movie::Movie(string name, int year, string rating, string genre, int length, double score)
{
	this->name = name;
	this->year = year;
	this->rating = rating;
	this->genre = genre;
	this->length = length;
	this->score = score;
}



inline std::istream & operator >> (std::istream & is, Movie & m)
{
	// TODO: insert return statement here
}