//
//  main.cpp
//  9 actividad de portafolio
//
//  Created by Saul Enrique Coreas Mendez on 9/19/19.
//  Copyright © 2019 Daniel Alberto Rodriguez Mendez. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;


int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    cout << "Elemento de ultimo: " << s.top() << endl;
    
    
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    
    if (s.empty())
        cout << "Pila esta vacia"<<endl;
    else
        cout << "Pila no esta vacia"<<endl;
    
    return 0;
}
