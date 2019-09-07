//
//  main.cpp
//  Tercer actividad
//
//  Created by Saul Enrique Coreas Mendez on 9/2/19.
//  Copyright © 2019 Daniel Alberto Rodriguez Mendez. All rights reserved.
//

#include <iostream>
using namespace std;

void fun(int *p){

    cout << "Direccion de a[0][0]: " << p <<"  Valor de a[0][0]: "<<*p<< endl;
    cout << "Direccion de a[2][1] = " << (p+2)+1 <<"  Valor de a[2][1]: "<<*(p+2*20+1) <<endl;
    cout << "Direccion de a[5][1] = " << (p+5)+1 <<"  Valor de a[5][1]: "<<*(p+5*20+1)<< endl;
    cout << "Direccion de a[1][10] = " << (p+1)+10 <<"  Valor de a[1][10]: "<<*(p+1*20+10)<< endl;
    cout << "Direccion de a[2][10] = " << (p+2)+10 <<"  Valor de a[2][10]: "<<*(p+2*20+10)<< endl;
    cout << "Direccion de a[5][3] = " << (p+5)+3 <<"  Valor de a[5][3]: "<<*(p+5*20+3)<< endl;
    cout << "Direccion de a[9][19] = " << (p+9)+19 << "  Valor de a[9][19]: "<<*(p+9*20+19)<<endl;
    
}


int main(){

    int m[10][20] = {   {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}   };
    
    cout << "*(*(m+i)+j)" << endl;  //////m=arreglo,i=numero de fila,j=numero de columna//
    cout << *(*(m+0)+0) << endl;
    cout << *(*(m+2)+1) << endl;
    cout << *(*(m+5)+1) << endl;
    cout << *(*(m+1)+10) << endl;
    cout << *(*(m+2)+10) << endl;
    cout << *(*(m+5)+3) << endl;
    cout << *(*(m+9)+19) << endl;
    
    fun(*m);
    
    //////Son validas las siguientes expreciones?
    
    //m[0][0] = *(*(m));  Si es valida.
    //m[2][1] = *((*(m)) + (2*cols + 1));   No es valida.
   // m[2][1] = *(*(m+2)+1);   Si es valida.
   // m[2][1] = *(m[2]+1);     Si es valida
    //m[2][1] = (*(m+1))[1];   Si es valida.
    
    
}


