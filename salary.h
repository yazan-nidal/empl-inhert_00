#pragma once
#include "emp.h"
using namespace std;
class SalariedEmployee : public Employee
{
protected:
	double anualsalary;
public:
	SalariedEmployee(string n="no name", int hy = 0, int ans=0):Employee(n,hy)
	{
		anualsalary = ans;
	}
	/*SalariedEmployee()
	{
		name = "no name";
		hieryear = 0;
		anualsalary = 0;

	}*/
	double	MonthlyPay()
	{
		return(anualsalary / 12);
	}

	~SalariedEmployee()
	{

	}

};