#pragma once
#include <variant>
#include <iostream>

using namespace std;



struct Vector2 {
	int X;
	int Y;
	Vector2(int Size);
	Vector2(int X, int Y);
};

struct Scale2 {
	float X;
	float Y;
	Scale2(float Percent);
	Scale2(float X, float Y);
};

using Dimension2 = variant<Vector2, Scale2>;

struct BoundaryObject {
	Dimension2 Position;
	Dimension2 Size;
	BoundaryObject(Dimension2 Size);
	BoundaryObject(Dimension2 Size, Dimension2 Position)
};