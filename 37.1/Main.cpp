#include <iostream>

using namespace std;

class Plane {
public:
	string name;
	int speed;
	double length;
	double height;
	int count;
};


int main() {
	Plane plane1;
	
	plane1.name = "Boeing747-400";
	plane1.speed = 950;
	plane1.count = 750;
	plane1.length = 70.66;
	plane1.height = 19.41;

}