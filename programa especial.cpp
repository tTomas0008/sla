#include <iostream>
using namespace std;
void main()
{
	int array1[20], adivinhar,i, contar =0, contar2 = contar2 = 0, contar3 = contar3 = 0;

	

	for (i = 0; i < 20; i++)
	{
		cout << "qual eh o" << i + 1 << " numero meu mano ?"  "\n";
		cin >> array1[i];
	}
	do
	{
	cout << "diz um outro numero";
	cin >> adivinhar;

	for (i = 0; i < 20; i++)
	{
		if (adivinhar == array1[i])
		{
			contar = contar + 1;

			
		}
	}
	
	if (contar > 0)
	{
		cout << "acertaste" "\n";
	}
	else 
	{
		cout << "errou, mt burro" "\n";
	}
	
	
	} while (contar <= 0);

	

	
	
}