// Rob Steele
// NE 6699
// HW #3

/* Write a program to calculate the volume of a truncated pyramid, given the length of a side of the bottom base, the length of a side of the top base, and the height.  You may assume that the pyramid has a square base.  You MUST use at least one class and one function (can be a member function).  PRint the volume to the screen. 
*/

// Vol = (1/3) * (a^2 + ab + b^2) *h

#include <iostream>
using namespace std;

class Pyramid
{
	int bot_base, top_base, height; // initializes variables
	public:
	void set_values ();
	int volume () {return (1/3)*((bot_base*bot_base) + (bot_base*top_base) + (top_base*top_base)) * height;}
};

void Pyramid::set_values ()
{
	cout << "Please enter the length of one side of the bottom base:  " << endl;
	cin >> bot_base;
	cout << "Please enter the length of one side of the top base:  " << endl;
	cin >> top_base;
	cout << "Please enter the height:  " << endl;
	cin >> height;
}

int main ()
{
	Pyramid pyra;
	pyra.set_values ();
	cout << "The volume of the pyramid is:  " << pyra.volume() << endl;
	return 0;
}

