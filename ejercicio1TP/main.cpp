#include <iostream>

using namespace std;

int main()
{
    int x;
    int res=0;
    char vel="kmh",vel1;
    cout << "Ingrese numero:"<<endl;cin>>x;
    cout << "Ingrese el tipo de velocidad:"<<endl;cin>>vel1;
    res= (x*1000)/3600;
    if(vel1!=vel){
        cout<<"El tipo de velocidad no es km/h.";
    }else{
        cout<<"La conversión seria:"<<res<<vel;
    }
    return 0;
}
