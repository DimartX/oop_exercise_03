#pragma once

#include <iostream>
#include <vector>

#include <include/figure.hxx>

class Triangle : public Figure{
public:
    Triangle(std::vector<Point> const& );

    Point figureCenter() const override;
    double figureArea() const override;
    void printPoints(std::ostream& ) const override;
    
    ~Triangle() = default;
protected:
    static const int NUM = 3;
    Point pts[NUM];
};
