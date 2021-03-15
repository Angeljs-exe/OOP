#include <iostream>

using namespace std;

class Grading{
	private:
		int assignment, quiz, attendance, mid, final, total;
		string grade;
		
	public:
		void kalkulasi (int tugas, int kuis, int kehadiran, int testMid, int testFinal){
			assignment	= (tugas*20)/100;
			quiz		= (kuis*10)/100;
			attendance  = (kehadiran*10)/100;
			mid			= (testMid*30)/100;
			final		= (testFinal*30)/100;
		}
		
		void huruf (){
			total = assignment + quiz + attendance + mid + final;
			
			if (total >= 91 && total <= 100){
				grade = "A";
			}
			else if (total >= 85 && total <= 90){
				grade = "A-";
			}
			else if (total >= 82 && total <= 84){
				grade = "B+";
			}
			else if (total >= 78 && total <= 81){
				grade = "B";
			}
			else if (total >= 75 && total <= 77){
				grade = "B-";
			}
			else if (total >= 70 && total <= 74){
				grade = "C+";
			}
			else if (total >= 67 && total <= 69){
				grade = "C";
			}
			else if (total >= 60 && total <= 66){
				grade = "C-";
			}
			else if (total >= 40 && total <= 59){
				grade = "D";
			}
			else if (total >= 0 && total <= 39){
				grade = "F";
			}
		}
		
		void display (int x){
			cout << x << "         " << total; 
			cout << "(" << grade << ")" << endl;
		}
};


int main(){
	int i, j, k;
	int nilaiTugas, nilaiKuis, nilaiKeh, nilaiMid, nilaiFinal;

	
	cout << "Grading System V1.0" << endl;
	cout << "=======================" << endl;
	cout << "Enter number of students : "; cin >> j;
	Grading mahasiswa [j+1];
	cout << endl;
	
	for (i=0; i<j; i++) {
		cout << "Enter grade for student " << i+1 << endl;
		cout << "Assignment	:"; cin >> nilaiTugas;
		cout << "Quiz		:"; cin >> nilaiKuis;
		cout << "Attendance	:"; cin >> nilaiKeh;
		cout << "Mid Exam	:"; cin >> nilaiMid;
		cout << "Final Exam	:"; cin >> nilaiFinal;
		cout << endl;
		
		mahasiswa[i].kalkulasi (nilaiTugas, nilaiKuis, nilaiKeh, nilaiMid, nilaiFinal);	
		mahasiswa[i].huruf ();
	}
	
	cout << endl;
	cout << "-----------------------" << endl;
	cout << "|Student Grade        |" << endl;
	cout << "-----------------------" << endl;
	cout << "Student   Grade" << endl;
	cout << "-----------------------" << endl;
	
	for (k=0; k<j; k++){
		mahasiswa[k].display (k+1);
	}
	
	cout << "-----------------------" << endl;
	cout << "Thank You !";

	return 0;	
}
