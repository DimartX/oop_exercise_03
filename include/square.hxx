#pragma once

#include <include/figure.hxx>
#include <include/rectangle.hxx>

class Square : public Rectangle {
public:
    Square(std::vector<Point> const& fig) : Rectangle(fig) {};
    void printPoints(std::ostream& out) const override;
    ~Square() = default;
};
