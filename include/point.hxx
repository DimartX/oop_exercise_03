#pragma once

#include <iostream>

struct my_double {
    double v;
    my_double() {};
    my_double(double x) : v(x) {};
};

struct Point {
    my_double x, y;
    Point() {};
    Point(double x, double y) : x(my_double(x)), y(my_double(y)) {};
};

std::istream& operator>> (std::istream& , Point& );
std::ostream& operator<< (std::ostream& , Point const& );
Point operator+ (Point const& , Point const& );
Point operator- (Point const& , Point const& );
Point operator* (Point const& , double const& );
Point operator/ (Point const& , double const& );

my_double operator+ (my_double const& , my_double const& );
my_double operator- (my_double const& , my_double const& );
my_double operator* (my_double const& , my_double const& );
my_double operator/ (my_double const& , my_double const& );
bool operator<  (my_double const& a, my_double const& b);
bool operator>  (my_double const& a, my_double const& b);
bool operator== (my_double const& a, my_double const& b);

bool operator< (Point const& , Point const& );    
bool operator> (Point const& , Point const& );
bool operator<= (Point const& , Point const& );
bool operator>= (Point const& , Point const& );
bool operator== (Point const& , Point const& );    

my_double dist(const Point& , const Point& );
