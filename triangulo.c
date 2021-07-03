#include <iostream>
#include <iomanip>
using namespace std;
 
//CONSTANTES PARA ARREGLO
const int tam=12;
//VARIABLES GLOBALES 
int draw=38,nivel=0; int matriz[tam][tam+1];
 
	//METODO TRIANGULO_PASCAL
	void triangulo_pascal()
	{
		for(int i=0;i<nivel;i++)
		{
			 matriz[i][0] = 1;matriz[i][i+1] = 1;
				cout << "\n\n" << setw(draw-i*2);
			for(int j=0;j<i+2;j++)
			{
				matriz[i+1][j+1] = matriz[i][j] + matriz[i][j+1];
					cout << matriz[i][j] << setw(4);
			}
		}
	}//FIN DEL METODO TRANGULO_PASCAL.
 
//PROGRAMA PRINCIPAL
int main(int argc,char**argv){
	cout << "Ingrese un nivel del 1 al 12\n\n";
	while(cout << ("Ingrese Nivel: "),cin >> (nivel),nivel<1|nivel>tam);
	triangulo_pascal();
	cout << "\n\n";
	system("pause");
}
