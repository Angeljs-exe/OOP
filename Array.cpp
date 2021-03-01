#include <iostream>

using namespace std;

int main ()
{
	//Declaration
	int grades[7] = {55,60,75,85,95};
	int average = 0, total = 0;
	int highest = grades[0], lowest = grades[0];
	
	//Average
	for (int i=0; i < 5; i++){
		total += grades[i];
	}
	average= total/7;
	cout << "Nilai rata-rata adalah " << average << endl;
	
	//Highest
	for (int i=0; i < 5; i++){
		if(grades[i] > highest){
			highest = grades[i];
		}}
	cout << "Nilai tertinggi adalah " << highest << endl;
	
	//Lowest
	for(int i=1; i<5; i++) {
    if(grades[i] < lowest) {
      lowest = grades[i];
    }
  }
  cout << "Nilai terendah adalah " << lowest << endl;
	
	return 0;
}
