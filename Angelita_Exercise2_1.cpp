#include <iostream>

using namespace std;

class Employee {
	int employeeNo;
	float employeeCmp;
  
public:

  void input(){
	cout << "Masukkan nomor pegawai: " << endl;
	cin >> employeeNo;
	cout << "Masukkan gaji pegawai: " << endl;
	cin >> employeeCmp;
  }
  
  void output(){
	cout << "Nomor pegawai yang dimasukkan adalah " << employeeNo << endl;
	cout << "Gaji pegawai yang dimasukkan adalah " << employeeCmp << endl;
  }
};


int main(){
	Employee employee1,employee2,employee3;

	cout << "Masukkan input untuk pegawai 1" << endl;
	employee1.input();
	cout << "Masukkan input untuk pegawai 2" << endl;
	employee2.input();
	cout << "Masukkan input untuk pegawai 3" << endl;
	employee3.input();

employee1.output();
employee2.output();
employee3.output();

return 0;
}

