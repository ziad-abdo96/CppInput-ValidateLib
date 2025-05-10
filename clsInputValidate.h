#pragma once
#include <iostream>
#include "D:\Projects\CPP\CppDateLib\CppDateLib\clsDate.h"

class clsInputValidate
{
public:
	static bool IsNumberBetween(int From, int  To, int Number)
	{
		return (Number >= From && Number <= To);
	}

	static bool IsNumberBetween(float From, float To, float Number)
	{
		return (Number >= From && Number <= To);
	}

	static bool IsDateBetween(clsDate Date, clsDate From, clsDate To)
	{
		if ((clsDate::IsDate1AfterDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From))
			&&
			clsDate::IsDate1BeforeDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To)
			)
		{
			return true;
		}

		if ((clsDate::IsDate1AfterDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To))
			&&
			clsDate::IsDate1BeforeDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From)
			)
		{
			return true;
		}

		return false;

	}

	static int ReadIntNumber(string Ms)
	{
		int Number;
		
		while (true)
		{
			cin >> Number;

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << Ms;
			}
			else
			{
				return Number;
			}
		}
	}

	static double ReadDblNumber(string Ms)
	{
		double Number;

		while (true)
		{
			cin >> Number;
			
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << Ms;

			}
			else
			{
				return Number;
			}
		}
	}

	static int ReadIntNumberBetween(int From, int To, string Ms)
	{
		int Number;
		while (true)
		{
			cin >> Number;
			if (cin.fail() || Number < From || Number > To)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				
				cout << Ms;
			}
			else
			{
				return Number;
			}
		}
	}

	static double ReadDblNumberBetween(double From, double To, string Ms)
	{
		double Number;

		while (true)
		{
			cin >> Number;

			if (cin.fail() || Number < From || Number > To)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << Ms;
			}
			else
			{
				return Number;
			}
		}
	}
	
	static bool IsValidDate(clsDate Date)
	{
		return clsDate::IsValidDate(Date);
	}
};