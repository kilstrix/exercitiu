#include "statistici.h"
#include <cstdio>
void statistici::set_name(const char* nume)
{
	int i=0;
	while(nume[i]!=0)
	{
		this->nume1[i] = nume[i];
		i++;
		printf("%d ", i);
	}
	this->nume1[i] = 0;
}
char * statistici::get_name()
{
	return this->nume1;	
}
void statistici::set_note(float n1, float n2, float n3)
{
	this->notaE = n1;
	this->notaH = n2;
	this->notaM = n3;
	float sum=0;
	sum = sum + n1;
	sum = sum + n2;
	sum = sum + n3;
	this->avg = sum / 3;
}
int statistici::get_notaE()
{
	return this->notaE;
}
int statistici::get_notaM()
{
	return this->notaM;
}
int statistici::get_notaH()
{
	return this->notaH;
}
int statistici::get_avg()
{
	return this->avg;
}