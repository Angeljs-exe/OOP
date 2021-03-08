#include <iostream>

using namespace std;
 
class Time{
    int jam, menit, detik;

public:
	
    void waktu(void){
    cout << "Masukkan waktu " << endl;
    cout << "Masukkan jam: "; 
	cin>>jam;
    cout << "Masukkan menit: ";  
	cin>>menit;
    cout << "Masukkan detik: ";  
	cin>>menit;
	}
    void inputWaktu(void){
    cout << "Waktu setelah ditambahkan: ";
    cout << jam << ":" << menit << ":" << detik << endl;
	}
    void tambahWaktu(Time T1,Time T2){
    this->detik=T1.detik+T2.detik;
    this->menit=T1.menit+T2.menit + this->detik/60;;
    this->jam= T1.jam+T2.jam + (this->menit/60);
    this->menit %=60;
    this->detik %=60;
	}
};
 
int main(){
	
	Time T1,T2,T3;
	T1.waktu();
	T2.waktu();
	T3.tambahWaktu(T1,T2);
	T3.inputWaktu();
     
return 0;
}
