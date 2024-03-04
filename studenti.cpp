#include "statistici.h"
#include <cstdio>
#include <iostream>
/*int compareN(statistici s1, statistici s2) {
	int a = 0;
	int b = 0;
	while (s1.get_name()[a] != '\0')
		a++;
	while (s2.get_name()[b] != '\0')
		b++;
	if (a > b)
		a = b;
	for (int i = 0; i < a; i++)
	{
		if (s1.get_name()[i] > s2.get_name()[i])
			return 1;
		if (s1.get_name()[i] < s2.get_name()[i])
			return -1;
	}

	return 0;
}*/
int compareM(float nr1, float nr2)
{
	if (nr1 > nr2) return 1;
	else if (nr1 < nr2) return -1;
	return 0;
}
int compareE(float nr1, float nr2)
{
	if (nr1 > nr2) return 1;
	else if (nr1 < nr2) return -1;
	return 0;
}
int compareH(float nr1, float nr2)
{
	if (nr1 > nr2) return 1;
	else if (nr1 < nr2) return -1;
	return 0;
}

int compareAVG(float nr1, float nr2)
{
	if (nr1 > nr2) return 1;
	else if (nr1 < nr2) return -1;
	return 0;
}
int main()
{
	statistici s1;
	statistici s2;
	s1.set_name("Andrei");
	s2.set_name("Cristi");
	s1.set_note(5, 7, 8.4);
	s2.set_note(5, 3, 9);
	//std::cout<<compareN(s1,s2);
	std::cout<<compareE(s1.get_notaE(), s2.get_notaE());
	std::cout << compareM(s1.get_notaM(), s2.get_notaM());
	std::cout << compareH(s1.get_notaH(), s2.get_notaH());
	std::cout << compareAVG(s1.get_avg(), s2.get_avg());
}
