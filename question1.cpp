#include <iostream>
using namespace std;

int main()
{
//Calculating Area and Volume of a Cylinder

//Declaration 
double radius;
double height;
double area;
double volume;

cout << "Enter radius: ";
cin >> radius;
cout << "Enter height: ";
cin >> height;

//Formula
area = 2*3.141592*radius*height+2*3.141592*radius*radius;
volume =  3.141592*radius*radius*height;

cout << "area of cylinder is: "<< area << endl;
cout << "volume of cyliner is: "<< volume << endl;

return 0;

}