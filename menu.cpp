#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void menu_colegio();
void menu_almacen();
void read_file(int tipo);
void promedio();
void nota_alta();
void agregar_alumno();
void agregar_producto();

void mp(){
	MenuPrincipal:
			int i;
			system("CLS");
			cout<<"-------------------"<<endl;
			cout<<"Menu Principal"<<endl;
			cout<<"-------------------"<<endl;
			cout<<"1 - Menu almacen"<<endl;
			cout<<"2 - Menu colegio"<<endl;
			cout<<"-------------------"<<endl;
			cout<<"3 - Salir"<<endl;
			cout<<"-------------------"<<endl;
			cout<<"Seleccione su opcion: ";
			cin>>i;
			
			switch(i){
				case 1:
					{menu_almacen();}
					system("cls");
					goto MenuPrincipal;
					break;
				case 2:
					{menu_colegio();}
					system("cls");
					goto MenuPrincipal;
					break;
				case 3:
					break;
				default:
					system("cls");
					cout<<"No existe la opcion, vuelva a intentar: "<<endl;
					system("Pause");
					goto MenuPrincipal;
					break;
			}
}

void menu_colegio(){
	MenuColegio:
			int i;
			system("CLS");
			cout<<"-------------------"<<endl;
			cout<<"Menu Colegio"<<endl;
			cout<<"-------------------"<<endl;
			cout<<"1 - Agregar alumno"<<endl;
			cout<<"2 - Leer archivo"<<endl;
			cout<<"3 - Nota mas alta"<<endl;
			cout<<"4 - Nota promedio"<<endl;
			cout<<"-------------------"<<endl;
			cout<<"5 - Regresar a menu principal"<<endl;
			cout<<"-------------------"<<endl;
			cout<<"6 - Salir"<<endl;
			cout<<"-------------------"<<endl;
			cout<<"Seleccione su opcion: ";
			cin>>i;
			
			switch(i){
				case 1:
					{agregar_alumno();}
					system("Pause");
					system("cls");
					goto MenuColegio;
					break;
				case 2:
					{read_file(1);}
					system("Pause");
					system("cls");
					goto MenuColegio;
					break;
				case 3:
					{nota_alta();}
					system("Pause");
					system("cls");
					goto MenuColegio;
					break;
				case 4:
					{promedio();}
					system("Pause");
					system("cls");
					goto MenuColegio;
					break;
				case 5:
					break;	
				case 6:
					exit(1);
				default:
					system("cls");
					cout<<"No existe la opcion, vuelva a intentar: "<<endl;
					system("Pause");
					goto MenuColegio;
					break;
			}
}

void menu_almacen(){
	MenuAlmacen:
			int i;
			system("CLS");
			cout<<"-------------------"<<endl;
			cout<<"Menu Almacen"<<endl;
			cout<<"-------------------"<<endl;
			cout<<"1 - Agregar articulo a Stock"<<endl;
			cout<<"2 - Leer archivo"<<endl;
			cout<<"-------------------"<<endl;
			cout<<"3 - Regresar a menu principal"<<endl;
			cout<<"-------------------"<<endl;
			cout<<"4 - Salir"<<endl;
			cout<<"-------------------"<<endl;
			cout<<"Seleccione su opcion: ";
			cin>>i;
			
			switch(i){
				case 1:
					{agregar_producto();}
					system("Pause");
					system("cls");
					goto MenuAlmacen;
					break;
				case 2:
					{read_file(2);}
					system("Pause");
					system("cls");
					goto MenuAlmacen;
					break;
				case 3:
					break;
				case 4:
					exit(1);
				default:
					system("cls");
					cout<<"No existe la opcion, vuelva a intentar: "<<endl;
					system("Pause");
					goto MenuAlmacen;
					break;
			}
}
