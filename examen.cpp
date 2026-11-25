#include<iostream>
#include<string>
using namespace std;

class Fecha{
private:
    int d,m,a;
public:
    Fecha(int dia,int mes,int anio){
        d=dia;
        m=mes;
        a=anio;
    }
    int getDia(){return d;}
    int getMes(){return m;}
    int getAnio(){return a;}
    string mostrarFecha(){
        return to_string(d)+"/"+to_string(m)+"/"+to_string(a);
    }
};

int main(){
    Fecha F(24,11,2026);
    cout<<F.mostrarFecha()<<endl;
    return 0;
}
