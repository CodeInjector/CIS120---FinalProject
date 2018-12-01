#include <iostream>
using namespace std;

int main()
{
    cout << "What do problem do you want to solve?" << endl;
    cout << "Pick one: (1) Area of a circle, (2) Area of a triangle, (3) Area of a square, (4) Area of a rectangle " << endl;
    cout << "Type the number : ";
    int num;
    cin >> num;
    cout << endl;

   if(num == 1){
   float radius, area_circle;


   cout << "Enter the radius of circle: ";
   cin >> radius;

   area_circle = 3.14 * radius * radius;
   cout << "Area of circle is: " << area_circle << endl;
   }

   else if(num == 2){
    float height, base;
    float answer;
    cout<<"Enter height: ";
    cin>>height;
    cout << "Enter base: ";
    cin >> base;
    answer= (0.5)*height*base;

    cout<<"Area of triangle is : "<<answer;
   }

   else if(num == 3){
    float side;
    cout << "Enter a side: ";
    cin >> side;

    float answer = side * side;
    cout << "Area of square is : " << answer;
   }

   else if(num == 4){
    float length, width, answer;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    answer = length * width;
    cout << "Area of rectangle is : " << answer;
   }
}
