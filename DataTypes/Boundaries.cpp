#include "Boundaries.h"

using namespace std;

Vector2::Vector2(int X, int Y) : X(X), Y(Y) {

}

Vector2::Vector2(int Size) : Vector2(Size, Size) {

}

Scale2::Scale2(float X, float Y) : X(X), Y(Y) {

}

Scale2::Scale2(float Percent) : Scale2(Percent, Percent) {

}

BoundaryObject::BoundaryObject(Dimension2 Size, Dimension2 Position) : Size(Size), Position(Position) {

}

BoundaryObject::BoundaryObject(Dimension2 Size) : BoundaryObject(Size, Vector2(0)) {

}