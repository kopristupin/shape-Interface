

#include <iostream>
#include<memory>

class Shape {
public:
    Shape(double c = 0, double d = 0) { a= std::make_shared<double>(c); b= std::make_shared<double>(d); };
     virtual double area()=0;
protected: 
    std::shared_ptr<double> a;
    std::shared_ptr<double> b;
  
    };

class Square : public Shape {
public:
    Square(double c, double d) : Shape(c, d) {};
    double area() {
        return (*a**b);
      }

};

class Rectangle : public Shape {
public:
    Rectangle(double c, double d) : Shape(c, d) {};
    double area() {
        return (*a **b);
    }
};

class Circle : public Shape {
public:
    Circle(double c) : Shape(c) {};
    double area() {
        return (3.14* *a **a);
    }
};

class Triangle : public Shape {
public:
    Triangle(double c, double d) : Shape(c, d) {}; //c- height, d-width
    double area() {
        return (*a * *b / 2);
    }

};

int main()
{
    Shape* sh;
    Square sq(4.5, 4.5);
    Rectangle rec(4, 10);
    Circle cir(5);
    Triangle tr(4, 10.6);
    sh = &sq;
    std::cout << sh->area() << " \n";
    sh = &rec;
    std::cout << sh->area() << "\n";
    sh = &cir;
    std::cout << sh->area() << "\n";
    sh = &tr;
    std::cout << sh->area() << "\n";

    return 0;
    
}

