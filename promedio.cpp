#include <iostream>
#include <fstream>

using namespace std;

struct alumno{
	string identificacion;
	string nombre;
	int nota;		
};

void promedio(){
	ifstream archivo;
	string nombreArchivo, cadena;
	fflush(stdin);
	system("cls");
	cout<<"Indique nombre de archivo: ";
	getline(cin,nombreArchivo);
	archivo.open(nombreArchivo.c_str(),ios::in);
	if(archivo.fail()){
		archivo.close();
		cout<<"No se pudo abrir el archivo!!!";
		system("Pause");
		system("CLS");
	}
	
	int lineas;
	float notaPromedio;
	string s;
	while (getline(archivo, s))
        lineas++;
        
    archivo.close();
    system("CLS");
				
	archivo.open(nombreArchivo.c_str(),ios::in);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo!!!";
		system("Pause");
		system("CLS");
	}
	
	alumno recordsetColegio[lineas];
				
	for(int i=0; i< lineas; i++){
		archivo>>recordsetColegio[i].identificacion >>
			    recordsetColegio[i].nombre >>
			    recordsetColegio[i].nota;
	}
	
	notaPromedio = 0;
			    
	for(int i=0; i< lineas; i++){
		if(i==0){
			cout<<"Notas:"<<endl;
		}
		cout<<recordsetColegio[i].nota<<endl;
		notaPromedio = notaPromedio + recordsetColegio[i].nota;
	}
			
	cout<<"El promedio de notas es: "<<notaPromedio/lineas<<endl;
	
	archivo.close();
}
