#include <iostream>
using namespace std;
void main()
{
	int dias, meses, restantes1, restantes2;
	

	
	do {
		cout << "que mes eh hoje?";
		cin >> meses;
	} while (meses < 0 || meses > 12);

	

	switch (meses)
	{
	case 12:
		cout << "que dia eh hoje? ";
		cin >> dias;
		if (dias > 25)
		{
			cout << "o natal eh so para o proximo ano";

		}
		else if (dias < 0)
		{
			cout << "da um numero valido, idiota";
		}
		else if (dias = 25)
		{
			cout << " o natal eh hoje!";
		}
		else
		{
			cout << "falta " << abs(dias - 25) << " dias para o natal!";

		} break;

	case 11: 
		cout << "que dia eh hoje? ";
		cin >> dias;
		if (dias > 30 || dias < 0)
		{
			cout << "da um numero valido";

		}
		else
		{
			cout << " faltam " << 30 - dias + 25 << " dias para o natal!";
		} break;

	case 10:
		cout << "que dia eh hoje? ";
		cin >> dias;
		if (dias > 31 || dias < 0)
		{
			cout << "da um numero valido";

		}
		else
		{
			restantes1 = 31;
			cout << " faltam " << 31 - dias + 25 + restantes1 << " dias para o natal!";
		} break;

	case 9:
		cout << "que dia eh hoje? ";
		cin >> dias;
		if (dias > 30 || dias < 0)
		{
			cout << "da um numero valido";

		}
		else
		{
			restantes1 = 61;
			cout << " faltam " << 30 - dias + 25 + restantes1 << " dias para o natal!";
		} break;
	case 8:
		cout << "que dia eh hoje? ";
		cin >> dias;
		if (dias > 31 || dias < 0)
		{
			cout << "da um numero valido";

		}
		else
		{
			restantes1 = 91;
			cout << " faltam " << 31 - dias + 25 + restantes1 << " dias para o natal!";
		} break;

	case 7:
		cout << "que dia eh hoje? ";
		cin >> dias;
		if (dias > 31 || dias < 0)
		{
			cout << "da um numero valido";

		}
		else
		{
			restantes1 = 122;
			cout << " faltam " << 31 - dias + 25 + restantes1 << " dias para o natal!";
		} break;

	case 6:
		cout << "que dia eh hoje? ";
		cin >> dias;
		if (dias > 30 || dias < 0)
		{
			cout << "da um numero valido";

		}
		else
		{
			restantes1 = 153;
			cout << " faltam " << 30 - dias + 25 + restantes1 << " dias para o natal!";
		} break;
	case 5:
		cout << "que dia eh hoje? ";
		cin >> dias;
		if (dias > 31 || dias < 0)
		{
			cout << "da um numero valido";

		}
		else
		{
			restantes1 = 183;
			cout << " faltam " << 31 - dias + 25 + restantes1 << " dias para o natal!";
		} break;

	case 4:
		cout << "que dia eh hoje? ";
		cin >> dias;
		if (dias > 30 || dias < 0)
		{
			cout << "da um numero valido";

		}
		else
		{
			restantes1 = 214;
			cout << " faltam " << 30 - dias + 25 + restantes1 << " dias para o natal!";
		} break;
	case 3:
		cout << "que dia eh hoje? ";
		cin >> dias;
		if (dias > 31 || dias < 0)
		{
			cout << "da um numero valido";

		}
		else
		{
			restantes1 = 244;
			cout << " faltam " << 31 - dias + 25 + restantes1 << " dias para o natal!";
		} break;
	case 2:
		cout << "que dia eh hoje? ";
		cin >> dias;
		if (dias > 28 || dias < 0)
		{
			cout << "da um numero valido";

		}
		else
		{
			restantes1 = 276;
			cout << " faltam " << 28 - dias + 25 + restantes1 << " dias para o natal!";
		} break;
	case 1:
		cout << "que dia eh hoje? ";
		cin >> dias;
		if (dias > 31 || dias < 0)
		{
			cout << "da um numero valido";

		}
		else
		{
			restantes1 = 304;
			cout << " faltam " << 31 - dias + 25 + restantes1 << " dias para o natal!";
		} break;
		
	


		}
	
	

	

	
	
	


}
