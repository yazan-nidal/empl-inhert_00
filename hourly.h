#pragma once
#include "emp.h"
using namespace std;

class HourlyEmployee : public Employee
{
protected:
	int hourperweek;
	double hourlywage;
public:
	HourlyEmployee(string n="no name", int hy= 0, int hwe= 0, double hwa=0):Employee(n,hy)
	{
	
		this->hourperweek = hwe;
		this->hourlywage = hwa;

	}
	/*HourlyEmployee()
	{
		this->name = "no name";
		this->hieryear = 0;
		this->hourperweek = 0;
		this->hourlywage = 0;

	}*/
	double	MonthlyPay()
	{
		return(hourperweek * 4 * hourlywage);
	}

	~HourlyEmployee()
	{

	}


};