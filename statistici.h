#pragma once
class statistici
{
	char * nume1;
	float notaM;
	float notaE;
	float notaH;
	float avg;
public:
	void set_name(const char* nume);
	char * get_name();
	void set_note(float n1,float n2, float n3);
	int get_notaM();
	int get_notaE();
	int get_notaH();
	int get_avg();
};

