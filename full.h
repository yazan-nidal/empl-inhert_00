#pragma once
 #include "hourly.h"
; class FullTime :public HourlyEmployee
{
public:
	FullTime(string n= "no name", int hy= 0, int hwe= 0, double hwa= 0):HourlyEmployee(n,hy,hwe,hwa)
	{

	}

	/*FullTime()
	{
		this->name = "no name";
		this->hieryear = 0;
		this->hourperweek = 0;
		this->hourlywage = 0;

	}*/
	double Annualpay()
	{

		double x;
		x = (hourperweek*(float)hourlywage);
		return (float)((x * 50.0) + (x * 2.0));

	}




	~FullTime()
	{

	}
};