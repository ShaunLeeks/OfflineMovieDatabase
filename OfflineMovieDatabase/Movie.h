#ifndef _MOVIE_H
#define _MOVIE_H
#include <string>
#include <iomanip>

using namespace std;

class Movie
{
private:
	string name;
	int year;
	string rating;
	string genre;
	int length;
	double score;
public:
	Movie();
	Movie(string name, int year, string rating, string genre, int length, double score);
	friend std::ostream& operator<<(std::ostream &os, const Movie &d);

	void draw();
	void moveTexture(double xinc, double yinc);
};

inline std::ostream& operator<<(std::ostream &os, const Movie &m)
{
	return os << "\"" << m.name <<"\","<< m.year << ",\"" << m.rating << "\",\"" << m.genre << "\"," << m.length << "," << m.score;
}
 
std::istream& operator>> (std::istream &is, Movie &m);

#endif _MOVIE_H