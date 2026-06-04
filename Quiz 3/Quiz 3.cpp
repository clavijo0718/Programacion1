#include<iostream>
#include<locale>
#include<cstdlib>
using namespace std;
void MayorCant(int Deportistas[],int Tam){
	int Mayor=0;
	for(int i=0;i<Tam;i++){
		if(Deportistas[i]>Mayor){
			Mayor=Deportistas[i];
		}
	} 
	cout<<Mayor<<"\n";
}
float Promedio(int Deportistas[],int Tam){
	float cant=0, Prom=0 ;
	for(int i=0;i<Tam;i++){
		cant+=Deportistas[i];
	} 
	Prom=cant/Tam;
	cout<<Prom<<"\n";
	return Prom;
}
void MalDesempeno(int Deportistas[],int Tam){
	int maldesempeno=0;
	for(int i=0;i<Tam;i++){
		if(Deportistas[i]<8){
			maldesempeno++;
		}
	} 
	cout<<maldesempeno<<"\n";
}
void NingunaVuelta(int Deportistas[],int Tam){
	int NoCompleta=0;
	for(int i=0;i<Tam;i++){
		if(Deportistas[i]==0){
			NoCompleta++;
		}
	} 
	cout<<NoCompleta<<"\n";
}
void ReporteGeneral(int Deportistas[],int Tam){
	float Aviso=0;
	cout<<"no completaron : \a";
	NingunaVuelta(Deportistas,Tam);
	cout<<"Mal desempeño : ";
	MalDesempeno(Deportistas,Tam);
	cout<<"El promedio : ";
	Aviso=Promedio(Deportistas,Tam);
	cout<<"La mayor cantidad de  vueltas : ";
	MayorCant(Deportistas,Tam);
	if(Aviso<10.5){
		cout<<"\nEl rendimiento general fue bajo y se recomienda reforzar el entrenamiento.\n";
	}else{
		cout<<"\nEl rendimiento general fue aceptable.\n";
	}
}
void Proceso1(int Deportistas[],int Tam){
	for(int i=0;i<Tam;i++){
		cout<<"Digite la cantidad de vueltas registradas por el deportista #"<<i+1<<" \nen el circuito :\n\t";
		cin>>Deportistas[i];
	}
}
//Pascal Case= NombrePato
int main(){
	setlocale(LC_ALL, "spanish");
	int Tam=10,Deportistas[Tam] ={0}, NoCompleta=0, Desempeno=0, Promedio=0;
	Proceso1(Deportistas,Tam);
	ReporteGeneral(Deportistas,Tam);
}
