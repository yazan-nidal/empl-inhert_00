#pragma once
#include "salary.h"
using namespace std;
class Staff:public SalariedEmployee

{
public:
		 Staff( string n ="no name",int hy=0,int ans=0) :SalariedEmployee(n,hy,ans)
	{
	
	}

	/* Staff()
	{
		name="no name"; 
		hieryear=0;
		anualsalary=0;
	}*/

	double Annualpay()
	{
		double y=(2020-hieryear);
		if(y>=5)
		{
		//double bonus=0;
		//bonus=((0.02)*y*anualsalary);
		return(anualsalary+(anualsalary*0.02*5));
		}
		else 
		{
		double bonus=0;
		bonus=((0.02)*y*anualsalary);
		return(bonus+anualsalary);
		}

	}

	/*double	MonthlyPay()
	{
		return(anualsalary/12);
	}

	*/
	~ Staff()
	{

	}
};