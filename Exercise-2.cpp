#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	
	float sal, tot, diff;
	
	cout << "Insira o valor do seu salario\n";
	cin >> sal;
	
	cout << "O seu salario antes do reajuste e " << sal <<"\n";
	
	if (sal <= 280){
		tot = sal*1.2;
		diff = tot - sal;
			cout << "O seu novo salario e " <<tot << " Com um aumento de 20% e uma diferenca de R$"<< diff <<"\n";
	}
	else if (sal > 280 and sal <= 700){
		tot = sal*1.15;
		diff = tot - sal;
			cout << "O seu novo salario e " <<tot << " Com um aumento de 15% e uma diferenca de R$" << diff <<"\n";
	}
	else if (sal > 700 and sal <= 1500){
		tot = sal*1.1;
		diff = tot - sal;
			cout << "O seu novo salario e " <<tot << " Com um aumento de 10% e uma diferenca de R$"<< diff <<"\n";
	}
	else{
		tot = sal*1.05;
		diff = tot - sal;
			cout << "O seu novo salario e " <<tot << " Com um aumento de 5% e uma diferenca de R$"<< diff <<"\n";
	}
	system ("pause");
		return 0;
}