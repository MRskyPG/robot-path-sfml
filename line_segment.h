#pragma once

#include "point.h"

namespace robopath {

	class LineSegment;
	class Rectangle;
	

	class LineSegment {
	public:
		LineSegment() {}
		LineSegment(const Point& start, const Point& end) :
			start(start), end(end) {
		}
		LineSegment(double sx, double sy, double ex, double ey) :
			start(sx, sy), end(ex, ey) {
		}

		double length() const;

		Point closestPoint(const Point& p) const;

		bool collidesWith(const Point& p) const;
		bool collidesWith(const LineSegment& ls) const;

		bool collidesWith(const Rectangle& r) const;


	public:
		Point start, end;
	};

}