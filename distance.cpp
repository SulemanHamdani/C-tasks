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

	
};

float calculateDistance(CartesianCoord c1, CartesianCoord c2)
{
	float distanceSquared = sqrt((pow(c1.x - c2.x, 2)) + (pow(c1.y - c2.y, 2)));
	return distanceSquared;
}

int calculateChebyshevDistance(CartesianCoord c1, CartesianCoord c2)
{
	return max(abs(c1.x - c2.x), abs(c1.y - c2.y));
}



int main()
{

	CartesianCoord c1(0, 0), c2(4, 3);
	cout << "The Euclidean distance between ( " << c1.x << ", " << c1.y << " ) , ( " << c2.x << ", " << c2.y << " ) is: " << calculateDistance(c1, c2) << endl;
	cout << "The Chebyshev distance between ( " << c1.x << ", " << c1.y << " ) , ( " << c2.x << ", " << c2.y << " ) is: " << calculateChebyshevDistance(c1, c2);



	/*float x1, x2, y1, y2;
	cout << "Enter the first pair of co-ordinates: ";
	cin >> x1 >> y1;

	cout << "Enter the second pair of co-ordinates: ";
	cin >> x2 >> y2;

	cout << "The distance between ( " << x1 << ", " << y1 << " ) , ( " << x2 << ", " << y2 << " ) is: " << calculateDistance(x1, y1, x2, y2);
	*/
}
