#include <iostream>
using namespace std;
int main(){
    int a,b;
    int s=0,r=0,m=0,d=0;
    cout<<"Ingrese el valor de a";
    cin>>a;
    cout<<"Ingrese el valor de b";
    cin>>b;
    s=a+b;
    r=a-b;
    m=a*b;
    d=a/b;
    cout<<"El resultado de la suma es:"<<s<<endl;
    cout<<"El resultado de la resta es:"<<r<<endl;
    cout<<"El resultado de la multiplicacion es:"<<m<<endl;
    cout<<"El resultado de la division:"<<d<<endl;
    return 0;
}