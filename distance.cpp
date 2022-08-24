#include <iostream>
#include <cmath>
using namespace std;


float calculateDistance(float x1, float y1, float x2, float y2)
{
	float distanceSquared = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
	return distanceSquared;
}

int main()
{
	float x1, x2, y1, y2;
	cout << "Enter the first pair of co-ordinates: ";
	cin >> x1 >> y1;

	cout << "Enter the second pair of co-ordinates: ";
	cin >> x2 >> y2;

	cout << "The distance between ( " << x1 << ", " << y1 << " ) , ( " << x2 << ", " << y2 << " ) is: " << calculateDistance(x1, y1, x2, y2);

}
