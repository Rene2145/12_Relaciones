#include <iostream>
#include <string>
using namespace std;

class Display{
	private:
		string tipo;
		
	public:
		Display(tipo ="digital"){
			this->tipo=tipo;
		}
		string getTipo(){
			return tipo;
		}
	
};

class Hora{
	private:
		int hora;
		int minutos;
		int segundos;
		
	public:
		Hora(int h, int m, int s){
			hora=h;
			minutos=m;
			segundos=s;
		}
		int getHora(){
			return hora;
		}
		int getMinutos(){
			return minutos;
		}
		int getSegundos(){
			return segundos;
		}	
};

class Reloj{
	private:
		Display *pDisplay;
		Hora *pHora;
		
	public:
		Reloj(int h, int m, int s){
			pHora= new Hora(h,m,s)
			pDisplay= NULL;
		}
		~Reloj(){
			delete pHora;
		}
		void asignarDisplay(Display *pD){
			pDisplay =pD;
		}
		void mostrarReloj(){
			if(pDisplay != NULL){
				if(pDisplay->getTipo()=="digital"){
					cout<<pHora->getHora();
						<<pHora->getMinutos();
						<<pHora->getSegundos();
				}else if(pDisplay->getTipo()=="analogico"){
					cout<<pHora->getHora();
						<<pHora->getMinutos();
						<<pHora->getSegundos();
				}
		}
};


int main (){
	
	return 0;
}
