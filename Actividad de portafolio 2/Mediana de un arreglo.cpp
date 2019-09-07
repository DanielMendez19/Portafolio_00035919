//
//  main.cpp
//  Media de un arreglo
//
//  Created by Saul Enrique Coreas Mendez on 8/21/19.
//  Copyright © 2019 Daniel Alberto Rodriguez Mendez. All rights reserved.
//

#include <iostream>
using namespace std;

float mediana(int);

float mediana(int *puntero){
    
    cout << "Primer valor = " << *puntero << endl;
    cout << "Segundo valor = " << *(puntero+1) << endl;
    cout << "Tercer valor = " << *(puntero+2) << endl;
    cout << "Cuarto valor = " << *(puntero+3) << endl;
    cout << "Quinto valor = " << *(puntero+4) << endl;
    cout << "Sexto valor = " << *(puntero+5) << endl;
    
    
    float M = *(puntero+2) + *(puntero+3);
    float m = M/2;
    
    cout << "Mediana = " << m << endl;
    return M;
}


int main()
{
    int numeros[6];
    numeros[0] = 2;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;
    numeros[4] = 5;
    numeros[5] = 5;
    
    mediana(numeros);
    
    return 0;
}
