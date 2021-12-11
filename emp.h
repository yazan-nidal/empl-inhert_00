#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
	string name;
	int hieryear;
public:
	Employee(string n= "no name", int hy = 0)
	{
		this->name = n;
		this->hieryear = hy;
	}//const
	string getN(){ return name;}
/*	Employee()
	{
		this->name = "no name";
		this->hieryear = 0;


	}//const with no barameter*/

	virtual double	MonthlyPay()=0;
	
	
	virtual double	Annualpay()=0;
	
	~Employee()
	{

	}//destructor

};