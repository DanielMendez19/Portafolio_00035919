//
//  main.cpp
//  actividad 8 de portafolio
//
//  Created by Saul Enrique Coreas Mendez on 9/13/19.
//  Copyright © 2019 Daniel Alberto Rodriguez Mendez. All rights reserved.
//

#include <iostream>
using namespace std;

//////////////////////dejar vacia//////
 struct Tpila{
 float elements[100];
 int top;
 };
 typedef struct Tpila Pila;
 
 void initialize(Pila *s){
 s->top = -1;
 }
 
 bool empty(Pila *s){
 return s->top < 0;
 }
 
 void push(Pila *s, float e){
 if(s->top < 99){
 (s->top)++;
 s->elements[s->top] = e;
 }
 }
 
 void pop(Pila *s, float *e){
 if(s->top >= 0){
 *e = s->elements[s->top];
 (s->top)--;
 }
 }

int main()
{
    Pila unaPila;
    initialize(&unaPila);
    
    if(empty(&unaPila))
        cout << "Esta vacia" << endl;
    
    float x = 5;
    float x1 = 4;
    float x2 = 3;
    float x3 = 2;
    float x4 = 1;
    
    
    push(&unaPila, x);
    push(&unaPila, x1);
    push(&unaPila, x2);
    push(&unaPila, x3);
    push(&unaPila, x4);
    
    if(empty(&unaPila))
        cout << "Esta vacia" << endl;
    
    float y = 0;
    float y1 = 0;
    float y2 = 0;
    float y3 = 0;
    float y4 = 0;
    
    pop(&unaPila, &y4);
    pop(&unaPila, &y3);
    pop(&unaPila, &y1);
    pop(&unaPila, &y2);
    pop(&unaPila, &y);
    
    cout<<" valor del fondo: "<<y<<endl;
    
    if(empty(&unaPila))
        cout << "Esta vacia" << endl;
    
    while(!empty(&unaPila)){
        pop(&unaPila, &y);
        cout << "y: " << y << endl;
    }
}

/////////////dejar igual////////
/*
 struct Tpila{
 float elements[100];
 int top;
 };
 typedef struct Tpila Pila;
 
 void initialize(Pila *s){
 s->top = -1;
 }
 
 bool empty(Pila *s){
 return s->top < 0;
 }
 
 void push(Pila *s, float e){
 if(s->top < 99){
 (s->top)++;
 s->elements[s->top] = e;
 }
 }
 
 void pop(Pila *s, float *e){
 if(s->top >= 0){
 *e = s->elements[s->top];
 (s->top)--;
 }
 }
 
 int main()
 {
 Pila unaPila;
 initialize(&unaPila);
 
 if(empty(&unaPila))
 cout << "Esta vacia" << endl;
 
 float x = 5;
 float x1 = 4;
 float x2 = 3;
 float x3 = 2;
 float x4 = 1;
 
 
     
 push(&unaPila, x);
 push(&unaPila, x1);
 push(&unaPila, x2);
 push(&unaPila, x3);
 push(&unaPila, x4);
 
 if(empty(&unaPila))
 cout << "Esta vacia" << endl;
 
 float y = 0;
 float y1 = 0;
 float y2 = 0;
 float y3 = 0;
 float y4 = 0;
 
 pop(&unaPila, &y4);
 pop(&unaPila, &y3);
 pop(&unaPila, &y1);
 pop(&unaPila, &y2);
 pop(&unaPila, &y);
 
 
     push(&unaPila, x4);
     push(&unaPila, x3);
     push(&unaPila, x2);
     push(&unaPila, x1);
     push(&unaPila, x);
     
 
     cout<<" valor del fondo: "<<y<<endl;
     
 while(!empty(&unaPila)){
 pop(&unaPila, &y);
 cout << "y: " << y << endl;
 }
     
     
 }


*/

