#pragma once

class CCoord
{
public:
	CCoord();
	CCoord(const float & localX, const float & localY, const float & localZ);
	~CCoord();
	CCoord & operator =(CCoord const & v);
	
public:
	struct { float x, y, z; };
};

bool const operator <(const CCoord & firstNumber, const CCoord & secNumber);
bool const operator <=(const CCoord & firstNumber, const CCoord & secNumber);
bool const operator >(const CCoord & firstNumber, const CCoord & secNumber);
bool const operator >=(const CCoord & firstNumber, const CCoord & secNumber);

CCoord const operator +(const CCoord & a, const CCoord & b);
CCoord const operator -(const CCoord & a, const CCoord & b);


CCoord const operator *(float number, const CCoord & secNumber);
CCoord const operator *(const CCoord & secNumber, float number);

CCoord const operator *(const CCoord & firstNumber, const CCoord & secNumber);

CCoord const operator /(float number, const CCoord & secNumber);
CCoord const operator /(const CCoord & secNumber, float number);
