#include <iostream>
#include <cmath>
#include <include/point.hxx>

std::istream& operator>> (std::istream& in, Point& p) {
    return in >> p.x.v >> p.y.v;
}

std::ostream& operator<< (std::ostream& out, Point const& p) {
    return out << "{"  << p.x.v << ' ' << p.y.v << "} ";
}

Point operator+ (Point const& a, Point const& b) {
    return Point{a.x.v + b.x.v, a.y.v + b.y.v};
}

Point operator- (Point const& a, Point const& b) {
    return Point{a.x.v - b.x.v, a.y.v - b.y.v};
}

Point operator* (Point const& a, double const& b) {
    return Point{a.x.v * b, a.y.v * b};
}

Point operator/ (Point const& a, double const& b) {
    return Point{a.x.v / b, a.y.v / b};
}



my_double operator+ (my_double const& a, my_double const& b) {
    return my_double{a.v + b.v};
}

my_double operator- (my_double const& a, my_double const& b) {
    return my_double{a.v - b.v};
}

my_double operator* (my_double const& a, my_double const& b) {
    return my_double{a.v * b.v};
}

my_double operator/ (my_double const& a, my_double const& b) {
    return my_double{a.v / b.v};
}



const double EPS = 1e-9;

bool operator< (my_double const& a, my_double const& b) {
    return b.v - a.v > EPS;
}

bool operator> (my_double const& a, my_double const& b) {
    return a.v - b.v > EPS;
}

bool operator== (my_double const& a, my_double const& b) {
    return !(a.v < b.v) && !(a.v > b.v);
}

bool operator<  (Point const& a, Point const& b) {
    return (a.x.v < b.x.v) || (a.x.v == b.x.v && a.y.v < b.y.v);
}

bool operator>  (Point const& a, Point const& b) {
    return (a.x.v > b.x.v) || (a.x.v == b.x.v && a.y.v > b.y.v);
}

bool operator== (Point const& a, Point const& b) {
    return (a.x.v == b.x.v) && (a.y.v == b.y.v);
}    

bool operator<= (Point const& a, Point const& b) {
    return a == b || a < b;
}

bool operator>= (Point const& a, Point const& b) {
    return a == b || a > b;
}

my_double dist(const Point& a, const Point& b) {
    return my_double(sqrt((a.x.v - b.x.v) * (a.x.v - b.x.v) +
                          (a.y.v - b.y.v) * (a.y.v - b.y.v)));
}
