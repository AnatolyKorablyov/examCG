// Bilet03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinearAnimation.h"
#include "Coord.h"
#include "Color.h"

void NumberInterpolationDemonstration()
{
	std::cout << "Float demonstration" << std::endl;
	CLinearAnimation <float> linearAnimation(4.f, 80.f, 0.5f);
	std::cout << linearAnimation.GetValue() << std::endl;
	while (!linearAnimation.HadFinished())
	{
		linearAnimation.Update(0.1f);
		std::cout << linearAnimation.GetValue() << std::endl;
	}
	std::cout << std::endl;
}

void CoordInterpolationDemonstarion()
{
	std::cout << "Coordinate demonstration" << std::endl;
	CCoord m_f(1, 2, 3);
	CCoord m_s = { 45, 34, 64 };
	CLinearAnimation <CCoord> linearAnimation(m_f, m_s, 1.f);
	std::cout << "x=" << linearAnimation.GetValue().x << "\t y=" << linearAnimation.GetValue().y  <<
		"\t z=" << linearAnimation.GetValue().z << std::endl;
	while (!linearAnimation.HadFinished())
	{
		linearAnimation.Update(0.1f);
		std::cout << "x=" << linearAnimation.GetValue().x << "\t y=" << linearAnimation.GetValue().y <<
			"\t z=" << linearAnimation.GetValue().z << std::endl;
	}
	std::cout << std::endl;
}

void ColorInterpolationDemonstration()
{
	std::cout << "Color demonstration" << std::endl;
	CColor m_f(0, 0, 0, 40);
	CColor m_s = {250, 100, 213, 255 };
	CLinearAnimation <CColor> linearAnimation(m_f, m_s, 1.f);
	std::cout << "r=" << linearAnimation.GetValue().r << "\t g=" << linearAnimation.GetValue().g <<
		"\t b=" << linearAnimation.GetValue().b << "\t a=" << linearAnimation.GetValue().a << std::endl;
	while (!linearAnimation.HadFinished())
	{
		linearAnimation.Update(0.1f);
		std::cout << "r=" << linearAnimation.GetValue().r << "\t g=" << linearAnimation.GetValue().g <<
			"\t b=" << linearAnimation.GetValue().b << "\t a=" << linearAnimation.GetValue().a << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	NumberInterpolationDemonstration();
	CoordInterpolationDemonstarion();
	ColorInterpolationDemonstration();
	return 0;
}

