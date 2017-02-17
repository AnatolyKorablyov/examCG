#pragma once
#include <iostream>

template <typename T>
class CLinearAnimation
{
public:
	CLinearAnimation(const T & startValue, const T & endValue, float time)
		: m_startValue(startValue)
		, m_endValue(endValue)
		, m_timeAnimation(time)
	{
		m_result = startValue;
	}					    

	void Update(float counter)
	{
		m_time += counter;
		if (m_time > m_timeAnimation)
		{
			m_finished = true;
		}
		T interpolationNumber = CalcInterpolation(m_time);
		if (!m_finished && interpolationNumber <= m_endValue && interpolationNumber >= m_startValue)
		{
			m_result = interpolationNumber;
		}
	}

	T GetValue()
	{
		return m_result;
	}

	bool HadFinished()
	{
		return m_finished;
	}

private:
	T CalcInterpolation(float time)
	{
		T interpolNumber = m_startValue + time*(m_endValue - m_startValue);
		return interpolNumber;
	}
private:
	T m_result;
	T m_startValue;
	T m_endValue;
	float m_timeAnimation = 0.f;
	float m_time = 0.f;
	bool m_finished = false;

};

