#include <iostream>
#include <cmath>
using namespace std;

struct CartesianCoord
{
	float x, y;

	CartesianCoord()
	{
		x = y = 0;
	}

	CartesianCoord(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	float calculateDistance(float x1, float y1, float x2, float y2)
	{
		float distance = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
		return distance;
	}
};


int main()
{

	CartesianCoord c1(0, 0), c2(4, 3);
	cout << "The distance between ( " << c1.x << ", " << c1.y << " ) , ( " << c2.x << ", " << c2.y << " ) is: " << c1.calculateDistance(c1.x, c1.y, c2.x, c2.y);



	/*float x1, x2, y1, y2;
	cout << "Enter the first pair of co-ordinates: ";
	cin >> x1 >> y1;

	cout << "Enter the second pair of co-ordinates: ";
	cin >> x2 >> y2;

	cout << "The distance between ( " << x1 << ", " << y1 << " ) , ( " << x2 << ", " << y2 << " ) is: " << calculateDistance(x1, y1, x2, y2);
	*/
}
