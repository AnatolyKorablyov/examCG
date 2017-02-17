#pragma once
class CColor
{
public:
	CColor();
	CColor(unsigned localR, unsigned localG, unsigned localB, unsigned localA);

	~CColor();

	CColor & operator =(CColor const & v);
public:
	struct { unsigned r, g, b, a; };

private:
	void NormalizeRGBA();
};

bool const operator <(const CColor & firstNumber, const CColor & secNumber);
bool const operator <=(const CColor & firstNumber, const CColor & secNumber);
bool const operator >(const CColor & firstNumber, const CColor & secNumber);
bool const operator >=(const CColor & firstNumber, const CColor & secNumber);

CColor const operator +(const CColor & a, const CColor & b);
CColor const operator -(const CColor & a, const CColor & b);


CColor const operator *(float number, const CColor & secNumber);
CColor const operator *(const CColor & secNumber, float number);

CColor const operator *(const CColor & firstNumber, const CColor & secNumber);

CColor const operator /(float number, const CColor & secNumber);
CColor const operator /(const CColor & secNumber, float number);
