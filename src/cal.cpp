#include "cal.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


void CAL::set(string &s, string &s1, string &s2, string &ope, string & Operator, int &i1, int &i2)
{
	int position = -1;

	for (int i = 0; i < Operator.length(); i++)
	{
		if (position == -1)
		{
			position = s.find(Operator.at(i));
		}
		else
		{
			break;
		}
	}

	s1 = s1.assign(s, 0, position);
	s2 = s2.assign(s, position+1, s.length());
	ope = ope.assign(s, position, 1);
	i1 = atoi(s1.c_str());
	i2 = atoi(s2.c_str());

};

void CAL::cal(string &ope, int *i1, int *i2)
{
	if (ope == "+")
	{
		cout << *i1 + *i2;
	}

	else if (ope == "-")
	{
		cout << *i1 - *i2;
	}

	else if (ope == "*")
	{
		cout << *i1 * *i2;
	}

	else if (ope == "/")
	{
		cout << *i1 / *i2;
	}
};
