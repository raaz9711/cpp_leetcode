//class  constructor
#include<iostream>
using namespace std;

class Circle {
    double radius;
    public:
    Circle(double r):radius(r){};
    double area(){
     //   cout<<"area "<< (radius * radius * 3.14159265)<<endl;
        return radius * radius * 3.14159265;}
};

class Cylinder{
    Circle base;
    double height;
    public:
    Cylinder(double r,double h): base(r),height(h){};

   double Volume(){
    return base.area() * height;
   }
};

int main() {

Cylinder foo(10,20);

cout<<"foo's volume : " <<foo.Volume() <<endl;

return 0;
}

