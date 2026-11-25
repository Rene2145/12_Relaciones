#include<iostream>
#include<string>
using namespace std;

class Cliente{
private:
    string nom,dir,tel;
public:
    Cliente(string n,string d,string t){
        nom=n;
        dir=d;
        tel=t;
    }
    void mostrarCliente(){
        cout<<"Nombre: "<<nom<<endl;
        cout<<"Direccion: "<<dir<<endl;
        cout<<"Telefono: "<<tel<<endl;
    }
};

class Auto{
private:
    string marca,mod,color,placa;
public:
    Auto(string m,string mo,string c,string p){
        marca=m;
        mod=mo;
        color=c;
        placa=p;
    }
    void mostrarAuto(){
        cout<<"Marca: "<<marca<<endl;
        cout<<"Modelo: "<<mod<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Placa: "<<placa<<endl;
    }
};

class Orden{
private:
    int id;
    static int cont;
    Cliente C;
    Auto A;
public:
    Orden(Cliente c,Auto a):C(c),A(a){
        id=++cont;
    }
    void mostrarOrden(){
        cout<<"Orden Nro: "<<id<<endl;
        C.mostrarCliente();
        A.mostrarAuto();
    }
};

int Orden::cont=0;

int main(){
    Cliente C1("Juan","Tacna","987654321");
    Auto A1("Toyota","Yaris","Rojo","ABC123");
    Orden O1(C1,A1);
    O1.mostrarOrden();

    cout<<endl;

    Cliente C2("Pedro","Pocollay","912345678");
    Auto A2("Kia","Rio","Negro","XYZ456");
    Orden O2(C2,A2);
    O2.mostrarOrden();
    return 0;
}
