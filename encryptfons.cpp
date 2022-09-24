/*
 _______  __    _  _______  ______    __   __  _______  _______  _______  _______  __    _  _______ 
|       ||  |  | ||       ||    _ |  |  | |  ||       ||       ||       ||       ||  |  | ||       |
|    ___||   |_| ||       ||   | ||  |  |_|  ||    _  ||_     _||    ___||   _   ||   |_| ||  _____|
|   |___ |       ||       ||   |_||_ |       ||   |_| |  |   |  |   |___ |  | |  ||       || |_____ 
|    ___||  _    ||      _||    __  ||_     _||    ___|  |   |  |    ___||  |_|  ||  _    ||_____  |
|   |___ | | |   ||     |_ |   |  | |  |   |  |   |      |   |  |   |    |       || | |   | _____| |
|_______||_|  |__||_______||___|  |_|  |___|  |___|      |___|  |___|    |_______||_|  |__||_______|

v1.0

creado por nachengue007 (github.com/nachengue007)

*/

#include<iostream>
#include<string>
#include<sstream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

using namespace std;


void Start(){
  srand(time(NULL));
}

string encrypt(string m){   
  string message = "";
  int n = 0;
  
  for(int i = 0; i < m.length(); i++){
  	n = rand() % 10;
  	message += to_string(n);
  	message += m[i]+n;
  }
  
  return message;
}

string decrypt(string m){
  string message = "";
  
  for(int i = 0;i < m.length(); i++){
  	message += m[i+1] - stoi(string(1, m[i]));
  	i++;
  }
  
  return message;
}

void titulo(){
  cout<<"\n _______  __    _  _______  ______    __   __  _______  _______  _______  _______  __    _  _______ ";
  cout<<"\n|       ||  |  | ||       ||    _ |  |  | |  ||       ||       ||       ||       ||  |  | ||       |";
  cout<<"\n|    ___||   |_| ||       ||   | ||  |  |_|  ||    _  ||_     _||    ___||   _   ||   |_| ||  _____|";
  cout<<"\n|   |___ |       ||       ||   |_||_ |       ||   |_| |  |   |  |   |___ |  | |  ||       || |_____ ";
  cout<<"\n|    ___||  _    ||      _||    __  ||_     _||    ___|  |   |  |    ___||  |_|  ||  _    ||_____  |";
  cout<<"\n|   |___ | | |   ||     |_ |   |  | |  |   |  |   |      |   |  |   |    |       || | |   | _____| |";
  cout<<"\n|_______||_|  |__||_______||___|  |_|  |___|  |___|      |___|  |___|    |_______||_|  |__||_______|";
  
  cout<<"\n\nhecho en: http://patorjk.com/software/taag/#p=display&f=Modular&t=EncryptFons";
}

int main(){

  Start();
  string m = "",maux = "";
  int op = 0, bk = 0;
  
  do{
  	system("cls");
  	op=bk=0;
  	m = "";
  	
  	cout<<"\t\tEncryptFons";
	cout<<"\n\tCreado por nachengue007";
	cout<<"\n\tgithub.com/nachengue007";
	cout<<"\n-------------------------------------------";
	cout<<"\n1 - Encriptar un mensaje.";
	cout<<"\n2 - Desencriptar un mensaje.";
	cout<<"\n3 - Titulo.";
	cout<<"\n4 - Salir.";
		   
	cout<<"\n\nOpcion: "; cin>>op;
	
	switch(op){
	  case 1:
	  	getline(cin,m);
	  	cout<<"\nIngrese el mensaje a encriptar: "; getline(cin,m);
	  	maux = encrypt(m);
	  	cout<<"\n - Mensaje encriptado: \t\t"<<maux;
	  	while(bk != 1){
	  	  cout<<"\n\n1 para salir: "; cin>>bk;
		}
	  	break;
	  case 2:
	  	getline(cin,m);
	  	cout<<"\nIngrese el mensaje a desencriptar: "; getline(cin,m);
	  	maux = decrypt(m);
	  	cout<<"\n - Mensaje desencriptado: \t"<<maux;
	  	while(bk != 1){
	  	  cout<<"\n\n1 para salir: "; cin>>bk;
		}
	  	break;
	  case 3:
	  	titulo();
	  	while(bk != 1){
	  	  cout<<"\n\n1 para salir: "; cin>>bk;
		}
	  	break;
	  case 4:
	  	cout<<"\nFin del programa.";
	  	break;
	  default:
	    cout<<"\nOpcion incorrecta.";
	    while(bk != 1){
	  	  cout<<"\n\n1 para salir: "; cin>>bk;
		}
	    break;
	}
  }while(op != 4);

  return 0;
}













