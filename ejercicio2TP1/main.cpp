#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");
    double m1,m2,b1,b2,x1,y1;
    cout<<"Ingrese el valor de la primera pendiente"<<endl;cin>>m1;
    cout<<"Ingrese el valor de la segunda pendiente"<<endl;cin>>m2;
    cout<<"Ingrese el valor de la primera ordenada"<<endl;cin>>b1;
    cout<<"Ingrese el valor de la segunda ordenada"<<endl;cin>>b2;

    if(m1==m2){
        cout<<"Las rectas son paralelas. No hay intersección"<<endl;
    }else{
        if(m1==m2&&b1==b2){
            cout<<"SOn rectas paralelas e iguales. Las intersección entre ellas es la recta puesta.";
        }
    }
    if(m1!=m2){
       cout<<"Estas dos rectas tienen intersección. Procedemos a buscarla."<<endl;
       x1=(b1-b2)/(m2-m1);
       y1=(m1*x1)+b1;
       cout<<"La intersección entre ambas rectas es en:"<<x1<<";"<<y1;
    }
    cout<<"Fin del programa";
    return 0;
}
