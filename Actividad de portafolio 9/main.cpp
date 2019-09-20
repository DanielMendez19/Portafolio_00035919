//
//  main.cpp
//  act de portafolio 6
//
//  Created by Saul Enrique Coreas Mendez on 9/13/19.
//  Copyright © 2019 Daniel Alberto Rodriguez Mendez. All rights reserved.
//

#include <iostream>
using namespace std;



int rec(int y,int low, int high, int *a){
    
    
    
    
   
  

int rec(int y ,int *a){
    int low=0;
    int high=0;
    
    if(low>high){
        return -1;
    }
    
    int mid = (low+high)/2;
    
    if(y == a[mid]){
        
        return mid;
    }
    if(y < a[mid])
        
        for (int i = 0; low < mid-1; i--) {
            if(y == a[i]){
                int indice = -1;
                indice = y;
            }
        }
        
    else
        for (int i = 0; mid+1 < high; i++) {
            if(y == a[i]){
                int indice = -1;
                indice = y;
            }
            }
    
    
}


    int main(){
        int a[9]={11,3,4,5,17,18,31,3};
        int low = 0;
        int high = a[8]-1;
        int i = 0;
        //int x = 0;
        
        cout<<"digite un numero"<<endl;
        cin>>i;
        
        if(i == -1){
            cout<<"No se encontro"<<endl;
            
        }else{
            cout<<"El elemento se encuentra en la casilla "<<i<<endl;
        }
        
    }
