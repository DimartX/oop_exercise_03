#pragma once

#include <iostream>
#include <vector>

#include <include/figure.hxx>

class Rectangle : public Figure {
public:
    Rectangle(std::vector<Point> const& );

    Point figureCenter() const override;
    double figureArea() const override;
    void printPoints(std::ostream& ) const override;
    
    ~Rectangle() = default;
protected:
    static const int NUM = 4;
    Point pts[NUM];
};
