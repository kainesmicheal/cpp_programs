#include<iostream>
#include<string>

using namespace std;

class shapes {
    public:
        int l,h,b;
        shapes(int lenght, int height, int breadth);
        shapes(int lenght, int breadth);
        shapes(int lenght);
        int square(int lenght);
        int rectangle(int lenght, int breadth);
        int triangle(int lenght, int breadth, int height);
};

shapes::shapes(int lenght,int height, int breadth) {
    l = lenght;
    h = height;
    b = breadth;
    cout << "You have initialized Three variables." << endl;
}
shapes::shapes(int lenght, int height) {
    l = lenght;
    h = height;
    cout << "You have initialized Two variables." << endl;
}
shapes::shapes(int lenght):l(lenght) {
    cout << "You have initialized One variable." << endl;
}

int shapes::square(int lenght) {
    return l*l;
}
int shapes::rectangle(int lenght, int breadth) {
    return l*b;
}
int shapes::triangle(int lenght, int breadth, int height) {
    return l*b*h;
}


int main() {
    shapes shape_One(10,10,10);
    shapes shape_two(10);
    
    
    int a,b,c;
    a = shape_One.square(10);
    cout << "The area of square is " << a << endl;
    
    b = shape_One.rectangle(10,10);
    cout << "The area of rectangle is " << b << endl;
    
    c = shape_One.triangle(10,10,10);
    cout << "The area of triangle is " << c << endl;
    
}


















