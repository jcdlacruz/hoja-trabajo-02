#include <iostream>
#include <fstream>

using namespace std;

struct alumno{
	string identificacion;
	string nombre;
	int nota;		
};

void nota_alta(){
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
	float notaAlta;
	string s, identificacion, nombre;
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
	
	notaAlta = 0;
			    
	for(int i=0; i< lineas; i++){
		if(i==0){
			cout<<"Notas:"<<endl;
		}
		cout<<recordsetColegio[i].nota<<endl;
		if(recordsetColegio[i].nota > notaAlta){
			notaAlta = recordsetColegio[i].nota;
			identificacion = recordsetColegio[i].identificacion;
			nombre = recordsetColegio[i].nombre;
		}
	}
			
	cout<<"La nota mas alta es: "<<notaAlta<<endl;
	cout<<"Pertenece a: "<<nombre<<endl;
	cout<<"Codigo: "<<identificacion<<endl;
	
	archivo.close();
}
