
#include "Precompiled.h"

Circle::Circle(const std::vector<Vector2> InVertices)
{
	Vector2 pos;
	for (auto iter = InVertices.begin(); iter < InVertices.end(); iter++)
	{
		pos.X += iter->X;
		pos.Y += iter->Y;
	}

	Center = pos / InVertices.size();
	Radius = (*std::max_element(InVertices.begin(), InVertices.end(),
		[&](Vector2 const& InLeft, Vector2 const& InRight)
	{
		return (Center - InLeft).SizeSquared() < (Center - InRight).SizeSquared();
	}
	)).Size();
}
