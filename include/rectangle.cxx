#include <include/rectangle.hxx>
#include <algorithm>

Rectangle::Rectangle(std::vector<Point> const& fig) {
    for (int i = 0; i < NUM; i++) {
        pts[i] = fig[i];
    }
}

Point Rectangle::figureCenter() const {
    return (pts[0] + pts[1] + pts[2] + pts[3]) / 4;
}
    
double Rectangle::figureArea() const {
    return std::abs(((pts[2].x - pts[0].x) * (pts[1].y - pts[0].y)).v);
}
    
void Rectangle::printPoints(std::ostream& out) const {
    out << "Rectangle: " << std::endl;
    for (Point const & pt : pts) {
        out << pt << std::endl;
    }
}

