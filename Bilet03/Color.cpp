#include "stdafx.h"
#include "Color.h"


CColor::CColor()
{
}

CColor::CColor(unsigned localR, unsigned localG, unsigned localB, unsigned localA)
	: r(localR)
	, g(localG)
	, b(localB)
	, a(localA)
{
	NormalizeRGBA();
}


CColor::~CColor()
{
}

CColor & CColor::operator=(CColor const & v)
{
	this->r = v.r;
	this->g = v.g;
	this->b = v.b;
	this->a = v.a;
	NormalizeRGBA();
	return *this;
}

void CColor::NormalizeRGBA()
{
	if (r < 0 || r > 255) r = 0;
	if (g < 0 || g > 255) g = 0;
	if (b < 0 || b > 255) b = 0;
	if (a < 0 || a > 255) a = 255;
}

bool const operator<(const CColor & fir, const CColor & sec)
{
	return (fir.r < sec.r &&
		fir.g < sec.g &&
		fir.b < sec.b &&
		fir.a < sec.a);
}

bool const operator<=(const CColor & fir, const CColor & sec)
{
	return (fir.r <= sec.r &&
		fir.g <= sec.g &&
		fir.b <= sec.b &&
		fir.a <= sec.a);
}

bool const operator>(const CColor & fir, const CColor & sec)
{
	return !(fir <= sec);
}

bool const operator>=(const CColor & fir, const CColor & sec)
{
	return !(fir < sec);
}

CColor const operator+(const CColor & fir, const CColor & sec)
{
	return CColor(fir.r + sec.r,
		fir.g + sec.g,
		fir.b + sec.b,
		fir.a + sec.a);
}

CColor const operator-(const CColor & fir, const CColor & sec)
{
	return CColor(fir.r - sec.r,
		fir.g - sec.g,
		fir.b - sec.b,
		fir.a - sec.a);
}

CColor const operator*(float number, const CColor & fir)
{
	return CColor(number * fir.r,
		number * fir.g,
		number * fir.b,
		number * fir.a);
}

CColor const operator*(const CColor & fir, float number)
{
	return CColor(number * fir.r,
		number * fir.g,
		number * fir.b,
		number * fir.a);
}

CColor const operator*(const CColor & fir, const CColor & sec)
{
	return CColor(fir.r * sec.r,
		fir.g * sec.g,
		fir.b * sec.b,
		fir.a * sec.a);
}

CColor const operator/(float number, const CColor & fir)
{
	return CColor(1 / number * fir.r,
		1 / number * fir.g,
		1 / number * fir.b,
		1 / number * fir.a);
}

CColor const operator/(const CColor & fir, float number)
{
	return CColor(1 / number * fir.r,
		1 / number * fir.g,
		1 / number * fir.b,
		1 / number * fir.a);
}
