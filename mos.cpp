#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include "part.h"
#include "full.h"
#include "staff.h"
#include "manager.h"
#include "hourly.h"
#include "salary.h"
#include "emp.h"

using namespace std;
void main()
{
	FILE*ptr=NULL;
	 
	ptr=fopen("ll.txt" , "r");

	if (ptr==NULL)
	{
		cout << "error file it cant open " << endl;
		return ;
	}//if
	int count=0;
	char*num=new char[1000];
	

	while (!feof(ptr))
		{
			fgets(num ,1000,ptr);
		
		    count++;
		
     }
	delete[]num;
	num=NULL;

	Employee**employee;																													 	                                                                                                              
	employee = new Employee*[count];																											                                                                        
	
	int i=0;
	rewind(ptr);
	
		while (!feof(ptr))
	{
		char*w=new char[1000];
	    char*name=new char[1000];
		int hieryear=0;
		double anualsalary=0;
		int hourperweek=0;
		double hourlywage=0;
		fscanf(ptr, "%s", w);

		if( strcmp(w,"Fulltime")==0)
		{
			fscanf(ptr, "%s %d %d %lf", name, &hieryear, &hourperweek, &hourlywage);    
			employee[i] = new  FullTime(name,hieryear, hourperweek , hourlywage);
			
		}

		else	if (strcmp(w,"Parttime")==0)
		{
			fscanf(ptr,"%s %d %d %lf", name, &hieryear, &hourperweek, &hourlywage);    
			employee[i] = new PartTime(name,hieryear, hourperweek , hourlywage);
			
		}

		else	if (strcmp(w,"Manager")==0)
		{
			fscanf(ptr, "%s %d %lf", name, &hieryear, &anualsalary);    
			employee[i] = new Manager(name , hieryear , anualsalary);
		
		}

		else	if (strcmp(w,"Staff")==0)
		{
			fscanf(ptr, "%s %d %lf", name, &hieryear, &anualsalary);       
			employee[i] = new Staff(name,hieryear, anualsalary);
			
		}
	
		//for(int i=0;i<count;i++)
			//cout<<"Monthly Pay:"<<employee[i]->MonthlyPay()<<"Annualpay:"<<employee[i]->Annualpay();
		cout<<employee[i]->getN()<<"\t"<<"\t"<<"Monthly Pay:"<<"\t"<<employee[i]->MonthlyPay()<<"\t"<<"Annualpay:"<<"\t"<<employee[i]->Annualpay()<<endl;
	
		i++;
	
	}//while
			
}