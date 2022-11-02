#include <iostream>

using namespace std;

int dataA[20];
int dataB[20];
int dataC[20];
int a, b, i, j;

void menu()
{
	cout<<"\t-----------------------------------------"<<endl;
  	cout<<"\t\t\tHIMPUNAN"<<endl;
  	cout<<"\t-----------------------------------------"<<endl;
  	cout<<"\t DAVID MARIO YOHANES SAMOSIR | 2115101055 "<<endl;
  	cout<<"\t KOMANG WIBISANA             | 2115101063"<<endl;
  	cout<<"\t I GEDE RISVA DHARMA SENTANA | 2115101066"<<endl<<endl;
}
  
int main()
{
	awal:
	system("cls");
	menu();
    
    cout <<"MENENTUKAN JUMLAH DATA A dan B\n";
 	cout <<"Jumlah Data A : ";
	cin >>a;
 	cout <<"Jumlah Data B : ";
 	cin >>b;
	cout <<"\nMENENTUKAN ANGGOTA DATA A dan B\n";
	for( i=0; i<a; i++){
  		cout <<"Anggota A ke - "<<i<<" = ";
  		cin >>dataA[i];
	}
  	for( j=0; j<b; j++){
  		cout <<"Anggota B ke - "<<j<<" = ";
  		cin >>dataB[j];
 	}

 	cout <<"\n1. HASIL HIMPUNAN DATA A dan B\n";
 	cout <<"Himpunan A = {";
 	for( i=0; i<a; i++){
  		cout <<dataA[i]<<",";
 	}
 	cout <<"}"<<endl;
 	cout <<"Himpunan B = {";
 	for(int j=0; j<b; j++){
  		cout <<dataB[j]<<",";
	}
 	cout <<"}"<<endl;
 	
 	cout <<"\n2. HASIL IRISAN DATA A dan B\n";
 	cout <<"A Irisan B = {";
 	for( i=0; i<a; i++){
  		for (int j=0; j<b; j++){
   			if(dataA[i] == dataB[j]){
    			cout <<dataA[i]<<",";
   			}
  		}
 	}
 	cout<<"}"<<endl;
 	
 	cout <<"\n3. HASIL GABUNGAN DATA A dan B\n";
 	cout <<"A Gabungan B = {";
 	for( i=0; i<a; i++){
  		cout <<dataA[i]<<",";
 	}
 	for( j=0; j<b; j++){
  		cout <<dataB[j]<<",";
 	}
 	cout <<"}"<<endl;
 	
 	cout <<"\n4. HASIL HIMPUNAN BAGIAN A dan B\n";
 	cout <<"Himpunan Bagian = {";
 	if(a<=b)
	{
		if(dataA[i]=dataB[j]){			
			for(i=0; i<a; i++){
				for(j=0; j<b; j++){	
				}				
			}
			cout << "A subset B";
		}else{
			cout << "A bukan subset B" <<endl;
		}
	}
	else if(b<=a)
	{//B subset A = Jumlah A >= B && semua dataB ada di dalam dataA
		if(dataB[j]=dataA[i]){			
			for(j=0; j<b; j++){
				for(i=0; i<a; i++){
				} 
			}
			cout << "B subset A";
		}else{
			cout << "B bukan subset A" <<endl;	
			}
			
		}
	
	cout<<"}"<<endl;
	
	
 	cout <<"\n5. HASIL SELISIH A dan B\n";
 		cout <<"\ta. Selisih A - B = {";
 		for(i=0; i<a; i++){
  			for (j=0; j<b; j++){
  				if(dataA[i]==dataB[j]){
  					break;
			  	}
   			}
   			if(j==b){
  				cout << dataA[i]<< ",";
		  	}
  		}
  		cout <<"}"<<endl;
  		
	 	cout <<"\tb. Selisih B - A = {";
	 	for(j=0; j<b; j++){
  			for (i=0; i<a; i++){
  				if(dataB[j]==dataA[i]){
  					break;
			  	}
   			}
   			if(i==a){
  				cout << dataB[j]<< ",";
		  	}
  		}
 	
 	cout <<"}"<<endl;
 	cout <<endl<<endl;
 	char exit;
 	cout <<"Apakah anda ingin mengulang program? (Y/T) : ";
    cin >>exit;
    if (exit=='y')
    {
        goto awal;
    }
 	return 0;
}