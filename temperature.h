#pragma once
class temperature
{
public:
	temperature();
	void store();
	void print();
	~temperature();

private:

	int array[12][2];
	int max;
	int min;
};

