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
    	cout<<"MENU: "<<nom<<endl;
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
};

int Orden::cont=0;


int main(){
    Cliente C("Juan","Tacna","987654321");
    C.mostrarCliente();
    return 0;
}
