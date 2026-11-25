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

class Hora{
private:
    int h,m;
public:
    Hora(int hora,int min){
        h=hora;
        m=min;
    }
    int getHora(){return h;}
    int getMinuto(){return m;}
    string mostrarHora(){
        if(m<10)
            return to_string(h)+":0"+to_string(m);
        return to_string(h)+":"+to_string(m);
    }
};

class Examen{
private:
    string asig;
    int ciclo;
    Fecha F;
    Hora H;
public:
    Examen(string a,int c,Fecha f,Hora h):F(f),H(h){
        asig=a;
        ciclo=c;
    }
    void mostrarExamen(){
        cout<<"Asignatura: "<<asig<<endl;
        cout<<"Ciclo: "<<ciclo<<endl;
        cout<<"Fecha: "<<F.mostrarFecha()<<endl;
        cout<<"Hora: "<<H.mostrarHora()<<endl;
    }
};

int main(){
    Fecha F(24,11,2026);
    Hora H(10,30);
    Examen E("Programacion Avanzada",4,F,H);
    E.mostrarExamen();
    return 0;
}
