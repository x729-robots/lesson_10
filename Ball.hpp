#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
	Ball (const Point& center, double radius, const Velocity& velocity, double mass, const Color color):ballCenter (center), ballRadius(radius), ballVelocity(velocity), ballMass(mass), ballColor(color){};
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
private:
	Point ballCenter;
	double ballRadius;
	Velocity ballVelocity;
	double ballMass;
	Color ballColor;


};
