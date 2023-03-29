#include <iostream>
#include "poly.h"
using namespace std;

void print(int res[], int b)
{
    for (int n = 0; n < b; n++)
    {
        cout << res[n];
        if (n != 0)
        {
        	cout << "x^" << n;
    	}
        if (n != b - 1)
        {
        	cout << " + ";	
		}   
    }
}
 
int main()
{
	int s, x;
	char y;
	cout << "Podaj stopien pierwszego wielomianu: " << endl;
	cin >> s;
	int A[s+1];
	for(int a = 0; a < s + 1; a++)
	{
		cout << "Podaj wartosc a dla ax^" << a << endl;
		cin >> x;
		A[a] = x;
	}

	cout << "Podaj stopien drugiego wielomianu: " << endl;
	cin >> s;
	int B[s+1];
	for(int a = 0; a < s + 1; a++)
	{
		cout << "Podaj wartosc x dla x^" << a << endl;
		cin >> x;
		B[a] = x;
	}

    int a = sizeof(A)/sizeof(A[0]);
    int b = sizeof(B)/sizeof(B[0]);
 
	int *result;
	
	while(true)
	{
		cout << "\n Pierwszy wielomian: \b";
   		print(A, a);
   		cout << "\n Drugi wielomian: \b";
    	print(B, b);

		cout << "\n__________________________________________" << endl;
		cout << "\nAby dodac do siebie wielomiany wpisz \"+\"" << endl;
		cout << "Aby odjac je od siebie wpisz \"-\"" << endl;
		cout << "Aby pomnozyc wpisz \"*\"" << endl;
		cout << "Aby obliczyc pierwszy wielomian metoda Hornera wpisz \"A\"" << endl;
		cout << "Aby obliczyc drugi wielomian metoda Hornera wpisz \"B\"" << endl;
		cout << "Aby zakonczyc program wpisz \"X\"" << endl;
		cout << "__________________________________________" << endl;
		cin >> y;
		switch(y)
		{	
	
			case '+':
				result = add(A, B, a, b);
				cout << "\nsuma wielomianow wynosi: \b";
    			print(result, max(a, b));
    			cout << endl << "Obliczyc metoda Hornera? [T/N]";
    			cin >> y;
    			if (y == 'T')
    			{
    				cout << "Podaj wartosc x:" << endl << "x = ";
    				cin >> x;
					cout << "wynik: " << horner (result, max(a, b), x) << endl;
				}
				break;
    	
    		case '-':
				result = sub(A, B, a, b);
				cout << "\nroznica wielomianow wynosi: \b";
    			print(result, max(a, b));
    			cout << endl << "Obliczyc metoda Hornera? [T/N]";
    			cin >> y;
    			if (y == 'T')
    			{
    				cout << "Podaj wartosc x:" << endl << "x = ";
    				cin >> x;
					cout << "wynik: " << horner (result, max(a, b), x) << endl;
				}
    			break;
    		
    		case '*':
				result = mul(A, B, a, b);
				cout << "\niloczyn wielomianow wynosi: \b";
    			print(result, max(a, b));
    			cout << endl << "Obliczyc metoda Hornera? [T/N]";
    			cin >> y;
    			if (y == 'T')
    			{
    				cout << "Podaj wartosc x:" << endl << "x = ";
    				cin >> x;
					cout << "wynik: " << horner (result, max(a, b), x) << endl;
				}
    			break;
    	
   			case 'A':
    			cout << "Podaj wartosc x:" << endl << "x = ";
    			cin >> x;	
    			cout << "wynik: " << horner (A, a, x) << endl;
    			break;
    	
   			case 'B':
    			cout << "Podaj wartosc x:" << endl << "x = ";
    			cin >> x;	
    			cout << "wynik: " << horner (B, b, x) << endl;
    			break;
				
    		case 'X':
    			return 0;
		}
	}
}
