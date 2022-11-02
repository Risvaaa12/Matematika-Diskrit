#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;



int main(){
	int hasil, bil1,bil2, pilih;
	char ulang;
	
	awal:
	cout<<"\t---------------------------------------------------"<<endl;
  	cout<<"\t\tMenghitung KPK dan FPB 2 Buah Bilangan"<<endl;
  	cout<<"\t---------------------------------------------------"<<endl;
  	cout<<"\t DAVID MARIO YOHANES SAMOSIR | 2115101055 "<<endl;
  	cout<<"\t KOMANG WIBISANA             | 2115101063"<<endl;
  	cout<<"\t I GEDE RISVA DHARMA SENTANA | 2115101066"<<endl;
  	
  	cout<<"\n \tMasukan bilangan pertama : ";
  	cin>>bil1;
  	cout<<"\n \tMasukan bilangan kedua   : ";
  	cin>>bil2;
  	
  	cout<<"\n\tMenu :"<<endl;
  	cout<<"\t1.KPK"<<endl;
  	cout<<"\t2.FPB"<<endl;  
  	cout<<"\n\tPilihan : ";
	cin>>pilih;
  	system("cls");
  	
  	if(pilih==1){
  		hasil=bil1;
		while(hasil%bil2!=0){
			hasil=hasil+bil1;
		}
	  	cout<<"\n\n\tHasil KPK-nya adalah "<<hasil<<endl<<endl;
	  	
	  	cout<<"\tUlang kembali [y/n] : ";
	    cin>>ulang;
	    if(ulang=='y'){
	    	system("cls");
	    	goto awal;
		}else if(ulang=='n'){
			system("cls");
			cout<<"Terimakasih";
		}else{
			system("cls");
			cout<<"Input salah";
		}
		
	}else if (pilih==2){
		hasil=bil1%bil2;
		while (hasil!= 0){
	        bil1=bil2;
	        bil2=hasil;
	        hasil=bil1%bil2;
	    }
	    cout<<"\n\n\tHasil FPB-nya adalah "<<bil2<<endl<<endl;
	    
	    cout<<"\tUlang kembali [y/n] : ";
	    cin>>ulang;
	    if(ulang=='y'){
	    	system("cls");
	    	goto awal;
		}else if(ulang=='n'){
			system("cls");
			cout<<"Terimakasih";
		}else{
			system("cls");
			cout<<"Input salah";
		} 	    
	}else{
		cout<<"Maaf Input Salah"<<endl;
	}
  		

    return 0;
}
