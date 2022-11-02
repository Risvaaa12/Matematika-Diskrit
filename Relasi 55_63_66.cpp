#include <iostream>
#include <conio.h>
#include<math.h>

using namespace std;
int n, i,j,kolom, matriks[10][10];

void menu()
{
	cout<<"\t---------------------------------------------------"<<endl;
  	cout<<"\t\t\tRELASI "<<endl;
  	cout<<"\t---------------------------------------------------"<<endl;
  	cout<<"\t DAVID MARIO YOHANES SAMOSIR | 2115101055 "<<endl;
  	cout<<"\t KOMANG WIBISANA             | 2115101063"<<endl;
  	cout<<"\t I GEDE RISVA DHARMA SENTANA | 2115101066"<<endl<<endl;
}

void input(){
    cout <<"Masukkan ukuran matriks : ";
	cin >>n;
    cout <<endl;
    
    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            cout <<"Masukkan baris "<<i+1<<" kolom "<<j+1<<" : ";
            cin >>matriks[i][j];
            }
    }
    cout <<endl;
    
    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            cout <<matriks[i][j]<<" ";
            }
            cout <<endl;
    }
    cout <<endl;
    
}

void simetris()
{ 
    for(j=0; j<n; j++){ 
		if(i!=j){
		    if((matriks[i][j]==matriks[j][i])){
		    	cout <<"Hasil = Matriks Simetris\n";
		    	cout <<"\nTekan ENTER untuk mengulang program...";
		    }else{
		    	cout <<"Hasil = Bukan Matriks Simetris\n";
		    	cout <<"\nTekan ENTER untuk mengulang program...";
		    }
		}
	}
}

void reflektif()
{
	for(j=0; j<n; j++){
		if(i!=j){
		    if(matriks[i][j]==1){
				cout <<"Hasil = Matriks Reflektif\n";
				cout <<"\nTekan ENTER untuk mengulang program...";
			}else{
				cout <<"Hasil = Bukan Matriks Reflektif\n";
				cout <<"\nTekan ENTER untuk mengulang program...";
			}
		}
	}
}

void fungsiCeiling()
{
	double n;
	cout <<"Masukkan bilangan = ";
    cin >> n;
    double ce=ceil(n);
    cout <<"Hasil Ceiling "<<n<<" = "<<ce;
}


int main()
{
	char ulang;
    int pilih;
    char z;
    awal:
    menu();
    cout <<"\tMasukkan pilihan : "<<endl;
    cout <<"\t1.Relasi Simetris"<<endl;
	cout <<"\t2.Relasi Reflektif"<<endl;
    cout <<"\t3.Fungsi Ceiling"<<endl;
    cout <<"\n\tPilihan : ";
    cin >> pilih;
    if (pilih==1){
    	system("cls");
    	input();
    	simetris();
    	
    	
		
		cout<<"\nUlang kembali [y/n] : ";
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
	}
	if (pilih==2){
    	system("cls");
    	input();
    	reflektif();
		
		cout<<"\nUlang kembali [y/n] : ";
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
	}
	if (pilih==3){
    	system("cls");
    	fungsiCeiling();
    	cout<<"\nUlang kembali [y/n] : ";
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
	}
    return 0;  
}
