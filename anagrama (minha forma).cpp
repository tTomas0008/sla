#include <iostream>
#include <string>
using namespace std;
void main()
{
	int contar = 0, contar2 = 0, i, j, jj, nl1, nl2, contar3 = 0, contar4 = 0, k, contar5 = 0;

	cout << " quantas letras tem a tua palavra? ";
	cin >> nl1;
	j = nl1;

	char palavra[9999], letras[999], l;


	for (i = 0; i < j; i++)
	{
		cout << "qual eh a" << i + 1 << " letra? ";
		cin >> palavra[i];
	}
	cout << " quantas letras tem a tua segunda palavra? ";
	cin >> nl2;
	jj = nl2;

	char palavra2[9999];

	for (i = 0; i < jj; i++)
	{
		cout << "qual eh a " << i + 1 << " letra? ";
		cin >> palavra2[i];
		letras[i] = palavra2[i];

	}


	if (jj != j)
	{
		cout << " impossivel formar um anagrama";
	}
	for (i = 0; i < jj; i++)
	{
		if (palavra[i] == palavra2[i])
		{
			contar4 = contar4 + 1;
		}
	}
	if (contar4 == 4)
	{
		cout << "sao palavras iguais";
	}
	else
	{
		for (i = 0; i < jj; i++)
		{
			for (l = 0; l < jj; l++)
			{
				if (palavra[i] == letras[l])
				{
					contar = contar + 1;
				}
			}
		}
		for (i = 0; i < jj; i++)
		{
			for (l = 0; l < jj; l++)
			{
				if (palavra2[i] == letras[l])
				{
					contar5 = contar5 + 1;
				}
			}
		}





		if (contar == contar5)
		{
			cout << "e um anagrama";



		}
		else
		{
			cout << "n e um anagrama";
		}




	}








}