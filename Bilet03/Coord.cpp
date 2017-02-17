#include "stdafx.h"
#include "Coord.h"

CCoord::CCoord()
{
}

CCoord::CCoord(const float & localX, const float & localY, const float & localZ)
	: x(localX)
	, y(localY)
	, z(localZ)
{
}

CCoord::~CCoord()
{
}

CCoord & CCoord::operator=(CCoord const & v)
{
	this->x = v.x;
	this->y = v.y;
	this->z = v.z;
	return *this;
}


bool const operator <(const CCoord & firstCoord, const CCoord & secCoord)
{
	return (firstCoord.x < secCoord.x &&
		firstCoord.y < secCoord.y &&
		firstCoord.z < secCoord.z);
}

bool const operator <=(const CCoord & firstCoord, const CCoord & secCoord)
{
	return (firstCoord.x <= secCoord.x &&
		firstCoord.y <= secCoord.y &&
		firstCoord.z <= secCoord.z);
}

bool const operator >(const CCoord & firstCoord, const CCoord & secCoord)
{
	return !(firstCoord <= secCoord);
}

bool const operator >=(const CCoord & firstCoord, const CCoord & secCoord)
{
	return !(firstCoord < secCoord);
}

CCoord const operator+(const CCoord & a, const CCoord & b)
{
	return CCoord(a.x + b.x, a.y + b.y, a.z + b.z);
}

CCoord const operator-(const CCoord & a, const CCoord & b)
{
	return CCoord(a.x - b.x, a.y - b.y, a.z - b.z);
}

CCoord const operator*(float number, const CCoord & b)
{
	return CCoord(number * b.x, number * b.y, number * b.z);
}

CCoord const operator*(const CCoord & b, float number)
{
	return CCoord(number * b.x, number * b.y, number * b.z);
}

CCoord const operator*(const CCoord & a, const CCoord & b)
{
	return CCoord(a.x * b.x, a.y * b.y, a.z * b.z);
}

CCoord const operator/(float number, const CCoord & b)
{
	return CCoord(number * 1 / b.x, number * 1 / b.y, number * 1 / b.z);
}

CCoord const operator/(const CCoord & b, float number)
{
	return CCoord(1 / number * b.x, 1 / number * b.y, 1 / number * b.z);
}
