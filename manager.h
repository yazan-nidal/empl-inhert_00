#pragma once
#include "salary.h"
using namespace std;
class 	Manager:public SalariedEmployee
{
public:
		Manager( string n ="no name",int hy=0,int ans=0) :SalariedEmployee(n,hy,ans)
	{
	
	}

	/*Manager()
	{
		this->name="no name"; 
		this->hieryear=0;
		this->anualsalary=0;
	}*/

	double Annualpay()
	{
		double bonus=0;
		bonus=(0.1)*anualsalary;
		return(bonus+anualsalary);

	}

	/*double	MonthlyPay()
	{
		return(anualsalary/12);
	}
	*/
	~Manager()
	{

	}

};