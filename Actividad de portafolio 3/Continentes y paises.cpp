//
//  main.cpp
//  Continentes y Paises
//
//  Created by Saul Enrique Coreas Mendez on 8/27/19.
//  Copyright © 2019 Daniel Alberto Rodriguez Mendez. All rights reserved.
//

#include <iostream>
using namespace std;

struct eu{
    string pa,pa1,pa2,pa3,pa4;
    string ca,ca1,ca2,ca3,ca4;
    int an,an1,an2,an3,an4;
    
};
struct ame{
    string qa,qa1,qa2,qa3,qa4;
    string wa,wa1,wa2,wa3,wa4;
    int z,z1,z2,z3,z4,z5;
};
struct afr{
    string ra,ra1,ra2,ra3,ra4;
    string ta,ta1,ta2,ta3,ta4;
    int y,y1,y2,y3,y4,y5;
};

struct asi{
    string da,da1,da2,da3,da4;
    string fa,fa1,fa2,fa3,fa4;
    int g,g1,g2,g3,g4,g5;
};

struct oce{
    string ca,ca1,ca2,ca3,ca4;
    string va,va1,va2,va3,va4;
    int b,b1,b2,b3,b4,b5;
};

    
typedef struct eu Ciclo;
typedef struct ame Ciclo1;
typedef struct afr Ciclo2;
typedef struct asi Ciclo3;
typedef struct oce Ciclo4;




void Europa(Ciclo *p){

    cout <<"Pais :"<< p->pa << "/ Capital : " << p->ca<< "/ Habitantes : " << p->an<<endl;
    cout <<"Pais :"<< p->pa1 << "/ Capital : " << p->ca1<< "/ Habitantes : " << p->an1<<endl;
    cout <<"Pais :"<< p->pa2 << "/ Capital : " << p->ca2<< "/ Habitantes : " << p->an2<<endl;
    cout <<"Pais :"<< p->pa3 << "/ Capital : " << p->ca3<< "/ Habitantes : " << p->an3<<endl;
    cout <<"Pais :"<< p->pa4 << "/ Capital : " << p->ca4<< "/ Habitantes : " << p->an4<<endl;
    
    cout<<"Pais mas poblado: "<<p->pa4<<"/"<<p->an4<<endl;
    
    int l1;
    l1=p->an+p->an1+p->an2+p->an3+p->an4;
    cout<<"Poblacion de continente: "<<l1<<endl;
    
}
void America(Ciclo1 *p1){
    
    
    cout <<"Pais :"<< p1->qa << "/ Capital : " << p1->wa<< "/ Habitantes : " << p1->z<<endl;
    cout <<"Pais :"<< p1->qa1 << "/ Capital : " << p1->wa1<< "/ Habitantes : " << p1->z1<<endl;
    cout <<"Pais :"<< p1->qa2 << "/ Capital : " << p1->wa2<< "/ Habitantes : " << p1->z2<<endl;
    cout <<"Pais :"<< p1->qa3 << "/ Capital : " << p1->wa3<< "/ Habitantes : " << p1->z3<<endl;
    cout <<"Pais :"<< p1->qa4 << "/ Capital : " << p1->wa4<< "/ habitantes : " << p1->z4<<endl;
    
     cout<<"Pais mas poblado: "<<p1->qa1<<"/"<<p1->z1<<endl;
    
    int l2;
    l2=p1->z+p1->z1+p1->z2+p1->z3+p1->z4;
    cout<<"Poblacion de continente: "<<l2<<endl;
    
}

void Africa(Ciclo2 *p2){
    
    cout <<"Pais :"<< p2->ra << "/ Capital : " << p2->ta<< "/ Habitantes : " << p2->y<<endl;
    cout <<"Pais :"<< p2->ra1 << "/ Capital : " << p2->ta1<< "/ Habitantes : " << p2->y1<<endl;
    cout <<"Pais :"<< p2->ra2 << "/ Capital : " << p2->ta2<< "/ Habitantes : " << p2->y2<<endl;
    cout <<"Pais :"<< p2->ra3 << "/ Capital : " << p2->ta3<< "/ Habitantes : " << p2->y3<<endl;
    cout <<"Pais :"<< p2->ra4 << "/ Capital : " << p2->ta4<< "/ Habitantes : " << p2->y4<<endl;
    
     cout<<"Pais mas poblado: "<<p2->ra1<<"/"<<p2->y1<<endl;
    int l3;
    l3=p2->y+p2->y1+p2->y2+p2->y3+p2->y4;
    cout<<"Poblacion de continente: "<<l3<<endl;
}
void Asia(Ciclo3 *p3){
    
    cout <<"Pais :"<< p3->da << "/ Capital : " << p3->fa<< "/ Habitantes : " << p3->g<<endl;
    cout <<"Pais :"<< p3->da1 << "/ Capital : " << p3->fa1<< "/ Habitantes : " << p3->g1<<endl;
    cout <<"Pais :"<< p3->da2 << "/ Capital : " << p3->fa2<< "/ Habitantes : " << p3->g2<<endl;
    cout <<"Pais :"<< p3->da3 << "/ Capital : " << p3->fa3<< "/ Hbaitantes : " << p3->g3<<endl;
    cout <<"Pais :"<< p3->da4 << "/ Capital : " << p3->fa4<< "/ Habitantes : " << p3->g4<<endl;
    
     cout<<"Pais mas poblado: "<<p3->da<<"/"<<p3->g<<endl;
    int l4;
    l4=p3->g+p3->g1+p3->g2+p3->g3+p3->g4;
    cout<<"Poblacion de continente: "<<l4<<endl;
    
}

void Oceania(Ciclo4 *p4){
    
    cout <<"Pais :"<< p4->ca << "/ Capital : " << p4->va<< "/ Habitantes : " << p4->b<<endl;
    cout <<"Pais :"<< p4->ca1 << "/ Capital : " << p4->va1<< "/ Habitantes : " << p4->b1<<endl;
    cout <<"Pais :"<< p4->ca2 << "/ Capital : " << p4->va2<< "/ Habitantes : " << p4->b2<<endl;
    cout <<"Pais :"<< p4->ca3 << "/ Capital : " << p4->va3<< "/ Habitantes : " << p4->b3<<endl;
    cout <<"Pais :"<< p4->ca4 << "/ Capital : " << p4->va4<< "/ Habitnates : " << p4->b4<<endl;
    
     cout<<"Pais mas poblado: "<<p4->ca1<<"/"<<p4->b<<endl;
    
    int l5;
    l5=p4->b+p4->b1+p4->b2+p4->b3+p4->b4;
    cout<<"Poblacion de continente: "<<l5<<endl;
}


int main()
{
    char n;
    
    Ciclo actual;
    
    actual.pa = "España";
    actual.ca = "Madrid";
    actual.an = 46720000;
    
    actual.pa1 = "Portugal";
    actual.ca1 = "Lisboa";
    actual.an1 = 10310000;
    
    actual.pa2 = "Francia";
    actual.ca2 = "Paris";
    actual.an2 = 66990000;
    
    actual.pa3 = "Italia";
    actual.ca3 = "Roma";
    actual.an3 = 60590000;
    
    actual.pa4 = "Alemania";
    actual.ca4 = "Berlin";
    actual.an4 = 82790000;
    
    
    
    ////////////
    
    Ciclo1 actual1;
    
    actual1.qa = "Argentina";
    actual1.wa = "Buenos Aires";
    actual1.z = 44270000;
    
    actual1.qa1 = "Brasil";
    actual1.wa1 = "Brasilia";
    actual1.z1 = 209300000;
    
    actual1.qa2 = "Chile";
    actual1.wa2 = "Santiago de Chile";
    actual1.z2 = 18050000;
    
    actual1.qa3 = "Mexico";
    actual1.wa3 = "Ciudad de Mexico";
    actual1.z3 = 129200000;
    
    actual1.qa4 = "Costa Rica";
    actual1.wa4 = "San Jose";
    actual1.z4 = 4960000;
    
    /////////////////
    
    Ciclo2 actual2;
    
    actual2.ra = "Sudafrica";
    actual2.ta = "Johanesburgo";
    actual2.y = 56720000;

    actual2.ra1 = "Egipto";
    actual2.ta1 = "El Cairo";
    actual2.y1 = 97550000;
    
    actual2.ra2 = "Marruecos";
    actual2.ta2 = "Casablanca";
    actual2.y2 = 35740000;
    
    actual2.ra3 = "Nigeria";
    actual2.ta3 = "Abuya";
    actual2.y3 = 190900000;
    
    actual2.ra4 = "Camerun";
    actual2.ta4 = "Yaunde";
    actual2.y4 = 24000000;
    
    //////////////////
    
    Ciclo3 actual3;
    
    actual3.da = "China";
    actual3.fa = "Beijin";
    actual3.g = 1386000000;
    
    actual3.da1 = "Japon";
    actual3.fa1 = "Tokio";
    actual3.g1 = 126000000;
    
    actual3.da2 = "Corea del Sur";
    actual3.fa2 = "Seul";
    actual3.g2 = 51470000;
    
    actual3.da3 = "India";
    actual3.fa3 = "Nueva Delhi";
    actual3.g3 = 1339000000;
    
    actual3.da4 = "Tailandia";
    actual3.fa4 = "Bangkok";
    actual3.g4 = 69090000;
    
    //////////////////
    
    Ciclo4 actual4;
    
    actual4.ca = "Australia";
    actual4.va = "Sydney";
    actual4.b = 24600000;
    
    actual4.ca1 = "Islas Marshall";
    actual4.va1 = "Majuro";
    actual4.b1 = 530660;
    
    actual4.ca2 = "Islas Salomon";
    actual4.va2 = "Honiara";
    actual4.b2 = 642000;
    
    actual4.ca3 = "Fiyi";
    actual4.va3 = "Suva";
    actual4.b3 = 999430;
    
    actual4.ca4 = "Kiribati";
    actual4.va4 = "Tarawa";
    actual4.b4 = 110136;
    
    //////////////////
    
    
    cout<<"informacion de que continente deseas?: "<<endl;
    cout<<"Europa(a)"<<endl;
    cout<<"America(b)"<<endl;
    cout<<"Africa(c)"<<endl;
    cout<<"Asia(d)"<<endl;
    cout<<"Oceania(e)"<<endl;
    cin>>n;
    cout<<""<<endl;
    cout<<""<<endl;
    
    
    if(n=='a'){
        cout<<""<<endl;
         Europa(&actual);
    }
    if(n=='b'){
        cout<<""<<endl;
        America(&actual1);
    }
    if(n=='c'){
        cout<<""<<endl;
        Africa(&actual2);
    }
    if(n=='d'){
        cout<<""<<endl;
        Asia(&actual3);
    }
    if(n=='e'){
        cout<<""<<endl;
        Oceania(&actual4);
    }

    
}
