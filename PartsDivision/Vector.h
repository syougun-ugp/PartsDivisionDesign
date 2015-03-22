#pragma once


struct Vector2
{
public:
	Vector2(float x,float y):
		x(x),y(y)
	{
	}

	Vector2& operator +=(const Vector2& vec)
	{
		this->x = vec.x;
		this->y = vec.y;
		return *this;
	}

	static Vector2 Zero(){ return Vector2(0, 0); }
	
	float x, y;

};

