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
	public:
	double bot_base, top_base, height; // initializes variables
	void set_values ();
	double volume ();
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

double Pyramid::volume ()
{
	double a, b, c, d, vol;
	a = bot_base * bot_base;
	b = bot_base * top_base;
	c = top_base * top_base;
	d = 0.3333333333333333333333;
//	cout << a << " " << b << " " << c << " " << d << endl;
	vol = (d * (a + b + c) * height);
//	cout << vol << endl;
	return vol;
}

int main ()
{
	Pyramid pyra;
	pyra.set_values ();
//	cout << "bot_base = " << pyra.bot_base << "  top_base = " << pyra.top_base << "  height = " << pyra.height << endl;
	cout << "The volume of the pyramid is:  " << pyra.volume() << endl;
	return 0;
}

