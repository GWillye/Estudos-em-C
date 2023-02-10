#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float cust, convit, num;
	
	cout << ("Digite qual a quantia necessaria pra bancar todo o evento: \n");
	cin >> cust;
	cout <<("Digite o preco individual de cada convite: \n");
	cin >> convit;
	
	num = cust / convit;
	
	cout << "A quantia necessaria de convites eh: \n"<<num;
	
	return 0;
}

