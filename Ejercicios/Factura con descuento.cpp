#include <iostream>
using namespace std;

int main(int argc,char const *argv[])
{
    double subtotal=0,total=0,impuesto=0,cd=0,ci=0;
    int descuento=0;

    cout<<"Ingrese el subtotal de la factura:";
    cin>>subtotal;

    cout<<"Ingrese el decuento(0,10,15,20)";
    cin>>descuento;

    cd=(subtotal*descuento)/100;
    ci=(subtotal-cd) * 0.15;
    total=subtotal-cd+ci;

    cout<<endl;
    cout<<"El total a pagar es:"<<total;
        return 0;
}