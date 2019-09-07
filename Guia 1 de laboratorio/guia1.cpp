//
//  main.cpp
//  guia1
//
//  Created by Saul Enrique Coreas Mendez on 9/6/19.
//  Copyright © 2019 Daniel Alberto Rodriguez Mendez. All rights reserved.
//

#include <iostream>
#include <cmath>
//#include <conio.h>
#include <stdlib.h>
using namespace std;


/*
    int m(int a){
        
        if(a==1){
            cout<<"n= "<<a<<endl;
            return a;
        }
        else{
           int x = a-1;
           return x;
        }
                
        
        
    }
    
    int main(){
        int uno;
        
        cout<<"Introduzca el primer numero: "<<endl;
        cin>>uno;
        int r = m(uno);
        cout<<r<<endl;
        return 0;
    }
*/


/*

int main() {
 
    int a[10];
    int t=0;
    int i;
    float promedio;
    
    for(i=0;i<10;i++){
    cout<<"ingrese el numero"<<endl;
    cin>>a[i];
        t += a[i];
    }
   promedio = t/10;
 
    cout<<"suma : "<<t<<endl;
    cout<<"promedio : "<<promedio<<endl;
    return 0;
}

*/

/*
int main(){
    int a[5][5];
    int n1,n2;
    int m1,m2,m3;
    int b1,b2,b3;
    int v1,v2,v3;
    int c1,c2;
    
    
    
    cout<<"Valores de matriz tridiagonal"<<endl;
    cout<<"Primera fila: "<<endl;
    cin>>n1;
    cin>>n2;
    cout<<"Segunda fila: "<<endl;
    cin>>m1;
    cin>>m2;
    cin>>m3;
    cout<<"Tercela fila: "<<endl;
    cin>>b1;
    cin>>b2;
    cin>>b3;
    cout<<"Cuarta fila: "<<endl;
    cin>>v1;
    cin>>v2;
    cin>>v3;
    cout<<"Quinta fila: "<<endl;
    cin>>c1;
    cin>>c2;
    
    a[0][0]=n1;
    a[0][1]=n2;
    a[1][0]=m1;
    a[1][1]=m2;
    a[1][2]=m3;
    a[2][1]=b1;
    a[2][2]=b2;
    a[2][2]=b3;
    a[2][3]=v1;
    a[3][2]=v2;
    a[3][3]=v3;
    a[4][3]=c1;
    a[4][4]=c2;
    
    cout<<"----------------------------------------------"<<endl;

    cout<<"Valores de la primera diagonal: "<<endl;
    cout<<a[1][0]<<endl;
    cout<<a[2][1]<<endl;
    cout<<a[3][2]<<endl;
    cout<<a[4][3]<<endl;
    
    cout<<"Valores de la diagonal principal: "<<endl;
    cout<<a[0][0]<<endl;
    cout<<a[1][1]<<endl;
    cout<<a[2][2]<<endl;
    cout<<a[3][3]<<endl;
    cout<<a[4][4]<<endl;
    
    cout<<"Valores de la tercera diagonal: "<<endl;
    cout<<a[0][1]<<endl;
    cout<<a[1][2]<<endl;
    cout<<a[2][3]<<endl;
    cout<<a[3][4]<<endl;
    

    return 0;
    
}
*/

/*
int con(double b){
    int x;
    int y;
    
    if(b<0){
        x=(b)*(-1);
        return x;
    }else{
        y=(b)*(-1);
        return y;
    }
    
    
    
}

int main(){
    
    double n,m;
    
    
    cout<<"Ingrese su numero complejo:"<<endl;
    cout<<"parte real: "<<endl;
    cin>>n;
    cout<<"parte imaginaria"<<endl;
    cin>>m;
    
    
    //cout<<"Z="<<n<<con(n,m)<<"j"<<endl;
    if(m<0){
        cout<<"Z="<<n<<"+"<<con(m)<<"j"<<endl;
    }else{
        cout<<"Z="<<n<<con(m)<<"j"<<endl;
    }
    
}
*/




