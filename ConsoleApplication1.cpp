

#include <iostream>
using namespace std;

int main()
{
    int limiteIf, limiteSup;
    int rdm = 0;
    int n = 0;

    char simbol = '0';
    cout << "Ingrese el limite inferior: " << endl;
    cin >> limiteIf;

    cout << "Ingresa el limite superior: " << endl;
    cin >> limiteSup;
    do {
        
        rdm = rand() % limiteSup + limiteIf;
        cout << "Este es tu numero: " <<rdm<< endl;

        cin >> simbol;

        if (simbol == '<') {
            limiteIf = rdm;
        }
        if (simbol == '>') {
            limiteSup = rdm;
        }
    } while (simbol == '>' || simbol =='<');
        
       
        
    
    cout << "Acertaste " << endl;
}



/*Desarrolle un programa para el siguiente juego : el usuario introduce un n ́umero como l ́ımite inferior, un
n ́umero como l ́ımite superior y piensa un n ́umero dentro de ese rango.El objetivo del programa es acertar
el n ́umero pensado por el usuario.Para ello el programa propone un n ́umero y el usuario responde con > ,
< o =, que significan que el n ́umero pensado es mayor, menor o igual respectivamente al numero propuesto
por el programa.Si la respuesta es =, entonces el programa terminar ́a satisfactoriamente, en otro caso, si
la respuesta es > o < el programa propondr ́a otro n ́umero hasta que finalmente acierte el n ́umero pensado
por el usuario.*/
