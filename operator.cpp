#include <iostream>

using namespace std;

int main()
{
  int x;

  cout << "Input sebuah angka: ";
  cin >> x;

  // contoh implementasi ternary operator
  string tipe = x > 10 ? "Puluhan" : "Satuan";
  cout << tipe;

  return 0;
}