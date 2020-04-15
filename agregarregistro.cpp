#include <iostream>
#include <fstream>

using namespace std;

struct articulo{
	string codea;
	int nivelmin;
	int nivelact;
	string proveedor;
	float precio;		
};

struct alumno{
	string identificacion;
	string nombre;
	int nota;		
};

bool validar_codigo(int tipo, string codigo, string nombreArchivos);

void agregar_alumno(){
	Estudiantes:
		ofstream archivo;
		string nombreArchivo;
		fflush(stdin);
		system("cls");
		cout<<"Indique nombre de archivo: ";
		getline(cin,nombreArchivo);
		archivo.open(nombreArchivo.c_str(),ios::app);
	
		if(archivo.fail()){
			archivo.close();
			cout<<"No se pudo abrir el archivo";
			exit(1);
		}
		system("CLS");
		archivo.close();
		
		int nota;	
		string identificacion, nombre;

		/*Ingreso de datos*/
		cout<<"Ingrese identificacion del alumno: "<<endl;
		cin>>identificacion;
			
		//bool respuesta = validar_codigo(1, identificacion, nombreArchivo);
		
		/*if(respuesta == true){
			system("cls");
			cout<<"El codigo de alumno ingresado ya existe, intente de nuevo."<<endl;
			system("Pause");
			goto Estudiantes;
		}*/
		
		fflush(stdin);
		cout<<"Ingrese Nombre del Alumno: "<<endl;
		getline(cin,nombre,'\n');
		cout<<"Ingrese Nota: "<<endl;
		cin>>nota;
		
		archivo.open(nombreArchivo.c_str(),ios::app);
		if(archivo.fail()){
			archivo.close();
			cout<<"No se pudo abrir el archivo";
			exit(1);
		}
		system("CLS");

		archivo<<identificacion<<"\t"<<nombre<<"\t"<<nota<<endl;	
		archivo.close();
		
		cout<<"Registro agregado exitosamente."<<endl;
}

void agregar_producto(){
	Articulos:
		ofstream archivo;
		string nombreArchivo;
		fflush(stdin);
		system("cls");
		cout<<"Indique nombre de archivo: ";
		getline(cin,nombreArchivo);
		archivo.open(nombreArchivo.c_str(),ios::app);
	
		if(archivo.fail()){
			cout<<"No se pudo abrir el archivo";
			archivo.close();
			exit(1);
		}
		system("CLS");
		archivo.close();
		
		float precio;	
		string proveedor, codea;
		int nivelmin, nivelact;
		/*Ingreso de datos*/
		cout<<"Ingrese Codigo del Articulo: "<<endl;
		cin>>codea;
		
		//bool respuesta = validar_codigo(2, codea, nombreArchivo);
		
		/*if(respuesta == true){
			system("cls");
			cout<<"El codigo ingresado ya existe, intente de nuevo."<<endl;
			system("Pause");
			goto Articulos;
		}*/
		
		fflush(stdin);
		cout<<"Ingrese Nombre del Proveedor: "<<endl;
		getline(cin,proveedor,'\n');
		cout<<"Ingrese Nivel Minimo: "<<endl;
		cin>>nivelmin;
		cout<<"Ingrese Nivel Actual: "<<endl;
		cin>>nivelact;
		cout<<"Ingrese Precio de Venta del Articulo: "<<endl;
		cin>>precio;
		
		archivo.open(nombreArchivo.c_str(),ios::app);
		if(archivo.fail()){
			cout<<"No se pudo abrir el archivo";
			archivo.close();
			exit(1);
		}
		system("CLS");
	
		archivo<<codea<<"\t"<<proveedor<<"\t"<<nivelmin<<"\t"<<nivelact<<"\t"<<precio<<endl;	
		archivo.close();
		
		cout<<"Registro agregado exitosamente."<<endl;
}


