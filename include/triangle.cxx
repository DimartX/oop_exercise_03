#include <include/triangle.hxx>
#include <algorithm>

Triangle::Triangle(std::vector<Point> const& fig) {
    for (int i = 0; i < NUM; i++) {
        pts[i] = fig[i];
    }
}

Point Triangle::figureCenter() const {
    return (pts[0] + pts[1] + pts[2]) / NUM;
}



double Triangle::figureArea() const {
    return std::abs((
                     (pts[1].x - pts[0].x) * (pts[3].y - pts[0].y) -
                     (pts[1].y - pts[0].y) * (pts[3].x - pts[0].x)
                     ).v) / 2;
}

void Triangle::printPoints(std::ostream& out) const {
    out << "Triangle: " << std::endl;
    for (Point const& pt : pts) {
        out << pt << std::endl;
    }
}
