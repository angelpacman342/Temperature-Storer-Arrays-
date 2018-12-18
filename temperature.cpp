#include "pch.h"
#include <iostream>
#include <iomanip>
#include "temperature.h"

using namespace std;

temperature::temperature()//constructor
{                         //inicialices each privates value to 0
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 12; j++)
			array[j][i];
	}
	max = 0;
	min = 0;
}

void temperature::store()//stores the highest and lowest temperature for each month
{
	int index = 1;
	cout << "Temperatures : \n" << endl;
	for (int i = 0; i < 12; i++)
	{
		cout << endl;
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				cout << index << " Month High : ";//high temperature input
				cin >> array[i][j];
			}
			else
			{
				do
				{
					cout << index << " Month Low  : ";//low temperature input
					cin >> array[i][j];
				} while (array[i][j] > array[i][j - 1]);
			}	
		}	
		index += 1;
	}
}

void temperature::print()//prints the multidimensional array
{                        //that contains the temperature of each month
	int index = 1;

	for (int i = 0; i < 12; i++)
	{
		cout << endl;
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
				cout << index << " Month High: " << setw(3) << array[i][j] << endl;//high temperatures
			else
				cout << index << " Month Low : " << setw(3) << array[i][j] << endl;//low temperatures
		}
		index += 1;
	}
}

temperature::~temperature()//desconstructor
{

}