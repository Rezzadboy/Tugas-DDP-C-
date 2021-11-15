#include <iostream>
using namespace std;

int main(){
//  Reza Nur Ramdhan
//  2117051057
//  Kelas A

	int simpanan;
	int bunga;
	int bulan;
	int tabungan;
    int x=1;
	
	cout<<"Jumlah Simpanan Pokok: Rp. "; 
	    cin>>simpanan;
	    
	cout<<"Jumlah Bunga: ";
	    cin>>bunga;
	    
	cout<<"Total Bulan: ";
	    cin>>bulan;
	cout<< "\n";

    cout<<"Simpanan Saya: Rp. "<< simpanan <<"\n";
    
	do {
		tabungan= simpanan + (simpanan * bunga/100);
		cout<<"bulan ke- " << x << "= Rp. " << tabungan <<"\n";
		simpanan = tabungan;
		x++;
	}
	while (x<=bulan); 
	return 0;
}
