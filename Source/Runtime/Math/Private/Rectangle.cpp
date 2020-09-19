#include "Precompiled.h"

Rectangle::Rectangle(const std::vector<Vector2> InVertices)
{
	float minX = 0, minY = 0, maxX = 0, maxY=0;


	for (auto iter = InVertices.begin(); iter < InVertices.end(); iter++)
	{
		minX > iter->X ? iter->X : false;
		minY > iter->Y ? iter->Y : false;
		maxX < iter->X ? iter->X : false;
		maxY < iter->Y ? iter->Y : false;
	}

	Max = Vector2(maxX, maxY);
	Min = Vector2(minX, minY);
}