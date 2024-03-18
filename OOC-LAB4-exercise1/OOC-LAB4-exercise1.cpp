#include <iostream>
#include <iomanip>

using namespace std;

struct Circle {
	float radius;
};

struct Rectangle {
	float length;
	float width;
};

struct Square {
	float length;
};

void circleArea(float radius, float& area1);
void rectangleArea(float length, float width, float& area2);
void squareArea(float length, float& area3);
void calculatePerimeter(float landLength, float landWidth, float &landPerimeter);
void calculateCost(float perimeter, float costPerUnit, float& totalCost);

int main() {
	Circle c1;
	float area1;

	Rectangle r1;
	float area2;

	Square s1;
	float area3;

	cout << "Enter circle radius : ";
	cin >> c1.radius;
	circleArea(c1.radius, area1);

	cout << "Enter rectangle length and width : ";
	cin >> r1.length >> r1.width;
	rectangleArea(r1.length, r1.width, area2);

	cout << "Enter square length : ";
	cin >> s1.length;
	squareArea(s1.length, area3);

	float landLength, landWidth;
	cout << "Enter land length and width : ";
	cin >> landLength >> landWidth;

	float greenArea;
	greenArea = (landLength * landWidth) - (area1 + area2 + area3);

	cout << "Green area : " << setprecision(3) << setiosflags(ios::fixed) << greenArea << endl;

	float perimeter;
	calculatePerimeter(landLength, landWidth, perimeter);

	cout << "Perimeter of the land : " << perimeter << endl;

	float costPerUnit;
	cout << "Enter cost per unit : ";
	cin >> costPerUnit;

	float totalCost;
	calculateCost(perimeter, costPerUnit, totalCost);

	cout << "Total cost for fence : " << setprecision(2) << setiosflags(ios::fixed) << totalCost << "LKR" << endl;

	return 0;
}

void circleArea(float radius, float &area1) {
	area1 = (22 / 7.0) * radius * radius;
}

void rectangleArea(float length, float width, float& area2) {
	area2 = length * width;
}

void squareArea(float length, float& area3) {
	area3 = length * length;
}

void calculatePerimeter(float landLength, float landWidth,float &landPerimeter) {
	landPerimeter = 2 * (landLength + landWidth);
}

void calculateCost(float perimeter, float costPerUnit, float& totalCost) {
	totalCost = perimeter * costPerUnit;
}
