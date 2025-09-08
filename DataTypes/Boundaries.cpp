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

Dimension2::Dimension2(Vector2 Offset, Scale2 Scale) : Offset(Offset), Scale(Scale) {

}

Dimension2::Dimension2(Vector2 Offset) : Dimension2(Offset, Scale2(0.0f)) {

}

Dimension2::Dimension2(Scale2 Scale) : Dimension2(Vector2(0), Scale) {

}

BoundaryObject::BoundaryObject(Dimension2 Size, Dimension2 Position) : Size(Size), Position(Position) {

}

BoundaryObject::BoundaryObject(Dimension2 Size) : BoundaryObject(Size, Vector2(0)) {

}