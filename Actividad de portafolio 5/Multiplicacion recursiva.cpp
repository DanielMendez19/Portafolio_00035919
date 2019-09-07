//
//  main.cpp
//  introduccion a la rercusion
//
//  Created by Saul Enrique Coreas Mendez on 8/29/19.
//  Copyright © 2019 Daniel Alberto Rodriguez Mendez. All rights reserved.
//

#include <iostream>
using namespace std;


int m(int b,int a){
    if(b==1){
        cout<<"n= "<<b<<endl;
        return a;
    }
    else{
        int x = a+m(a,b-1);
        return x;
    }
    
}

int main() {
    int uno,dos;
    
    cout<<"Introduzca el primer numero: "<<endl;
    cin>>uno;
    cout<<"Introduzca el segundo numero: "<<endl;
    cin>>dos;
    
    cout<<"multiplicacion de "<<uno <<"*"<<dos<<": "<<endl;
    int r = m(uno,dos);
    cout<<"resultado: "<<r<<endl;
    return 0;
}


