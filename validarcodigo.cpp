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

bool validar_codigo(int tipo, string codigo, string nombreArchivos){
	bool existe;
	ifstream archivos;
	fflush(stdin);
	archivos.open(nombreArchivos.c_str(),ios::in);
	if(archivos.fail()){
		archivos.close();
		cout<<"No se pudo abrir el archivo!!!";
		system("Pause");
		system("CLS");
	}
	
	int lineas;
	string s;
	while (getline(archivos, s))
        lineas++;
    cout<<"Lineas: "<<lineas<<endl;
        
    archivos.close();
    		
	archivos.open(nombreArchivos.c_str(),ios::in);
		if(archivos.fail()){
			cout<<"No se pudo abrir el archivo!!!";
			system("Pause");
			system("CLS");
		}
		
	existe = false;

	switch(tipo){
		case 1:
			{
				alumno recordsetColegio[lineas];
				
				for(int i=0; i< lineas; i++){
			        archivos>>recordsetColegio[i].identificacion >>
			        			recordsetColegio[i].nombre >>
			        			recordsetColegio[i].nota;
			    }
			    
				for(int i=0; i< lineas; i++){					
					if(recordsetColegio[i].identificacion==codigo){
						existe = true;
					};
				}
			}
			break;
		case 2:
			{
				articulo recordsetAlmacen[lineas];
				
				for(int i=0; i< lineas; i++){
			        archivos>>recordsetAlmacen[i].codea >>
			        			recordsetAlmacen[i].proveedor >>
			        			recordsetAlmacen[i].nivelmin >>
			        			recordsetAlmacen[i].nivelact >>
			        			recordsetAlmacen[i].precio;
			    }
				
				for(int i=0; i< lineas; i++){
					if(recordsetAlmacen[i].codea==codigo){
						existe = true;
					};
				}
			}
			break;
		default:
			break;
	}
    
	archivos.close();
	return existe;
}

