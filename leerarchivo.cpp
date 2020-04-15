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

void read_file(int tipo){
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
	string s, mensaje;
	while (getline(archivo, s))
        lineas++;
        
    archivo.close();
    system("CLS");
	cout<<"Lineas: "<<lineas<<endl;
			
	archivo.open(nombreArchivo.c_str(),ios::in);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo!!!";
		system("Pause");
		system("CLS");
	}
	
	switch(tipo){
		case 1:
			{
				alumno recordsetColegio[lineas];
				
				for(int i=0; i< lineas; i++)
			    {
			        archivo>>recordsetColegio[i].identificacion >>
			        			recordsetColegio[i].nombre >>
			        			recordsetColegio[i].nota;
			    }
			    
				for(int i=0; i< lineas; i++){
					
					if(i==0){
						cout<<"Codigo"<<"\t"
						<<"Nombre"<<"\t"
						<<"Nota"<<endl;
					}
					
					cout<<recordsetColegio[i].identificacion<<"\t"
						<<recordsetColegio[i].nombre<<"\t"
						<<recordsetColegio[i].nota<<endl;
				}
			}
			break;
		case 2:
			{
				articulo recordsetAlmacen[lineas];
				
				for(int i=0; i< lineas; i++)
			    {
			        archivo>>recordsetAlmacen[i].codea >>
			        			recordsetAlmacen[i].proveedor >>
			        			recordsetAlmacen[i].nivelmin >>
			        			recordsetAlmacen[i].nivelact >>
			        			recordsetAlmacen[i].precio;
			    }
				
				for(int i=0; i< lineas; i++){
				mensaje = "";
				if(recordsetAlmacen[i].nivelact<= recordsetAlmacen[i].nivelmin){
					mensaje = "Hacer pedido";
				}
				
				if(i==0){
					cout<<"Codigo"<<"\t"
					<<"Proveedor"<<"\t"
					<<"Minimo"<<"\t"
					<<"Actual"<<"\t"
					<<"Precio"<<"\t"
					<<"Observaciones"<<endl;
				}
				cout<<recordsetAlmacen[i].codea<<"\t"
					<<recordsetAlmacen[i].proveedor<<"\t"
					<<recordsetAlmacen[i].nivelmin<<"\t"
					<<recordsetAlmacen[i].nivelact<<"\t"
					<<recordsetAlmacen[i].precio<<"\t"
					<<mensaje<<endl;
				}
			}
			break;
		default:
			break;
	}
	
	archivo.close();
}
