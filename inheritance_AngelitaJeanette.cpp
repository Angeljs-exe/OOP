#include <iostream>

using namespace std;


class Person {
	protected:
		string name;
		char gender;
	
	public:
		Person(){}
		void setName (string nama){
			name = nama;
		}
		void setGender (char jeniskelamin){
			gender = jeniskelamin;
		}
		string getName (){
			return name;
		}
		char getGender (){
			return gender;
		}
		
};

class Teacher : public Person {
	private:
		int nik;
		string faculty;
	
	public:
		void setNik (int noNik){
			nik = noNik;
		}
		int getNik (){
		}
		void setFaculty (string faculty){
		}
		string getFaculty (){
			return faculty;
		}
		void setData (){
		}
		void displayData(){
		}
		
};

class Student : public Person {
	private:
		int nim;
		string registration_number;
		string prodi;
		
	public:
		void setNim (int noNim){
			nim = noNim;
		}
		void setRegistrationNumber (string noRegistration_number){
			registration_number = noRegistration_number;
		}
		void setProdi (string jenisProdi){
			prodi = jenisProdi;
		}
		int getNim(){
		}
		string getRegistrationNumber(){
			return registration_number;
		}
		string getProdi(){
			return prodi;
		}
};


int main (){
	return 0;
}

