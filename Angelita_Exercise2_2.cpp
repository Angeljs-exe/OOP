#include<iostream>

using namespace std;

class tollBooth {   
    int kendaraan;
    double bayar;
    
public:
    tollBooth(){
		kendaraan=0;
    	bayar=0.00;
	}
	
    void dibayar(){
        kendaraan = kendaraan + 1;
        bayar= bayar + 0.50;
    }
    void tidakBayar(){
        kendaraan = kendaraan + 1;
    }
    void outputKendaraan(){
    	cout <<" Jumlah mobil yang lewat : " << kendaraan << endl;
    }
        void outputBayar(){
        cout <<" Jumlah uang yang terkumpul: "<< bayar << endl;
    }
};
 
 
int main(){
	int i;
    tollBooth j;

    do{
	cout << "1. Untuk mobil yang masuk dan membayar\n2. Untuk mobil yang masuk tapi tidak membayar\n3. Exit " << endl;
	cout << "Masukkan pilihan : "; 
	cin >> i;
	switch (i){

	case 1:
    	j.dibayar();
        j.outputKendaraan();
        j.outputBayar();
    break;
    case 2:
    	j.tidakBayar();
        j.outputKendaraan();
        j.outputBayar();
    break;
    case 3:
        j.outputKendaraan();
        j.outputBayar();
    };
	}while(i!=3);
	
	return 0;
}

