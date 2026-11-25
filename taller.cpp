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

int main(){
    Cliente C("Juan","Tacna","987654321");
    C.mostrarCliente();
    return 0;
}
