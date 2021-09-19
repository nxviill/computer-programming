#include <iostream>
 
using namespace std;
 
int main()
{
  int nilai;
 
  cout << "Masukkan nilai hasil pembelajaran: ";
  cin >> nilai;
 
  if (nilai >=85 && nilai < 101 ) {
    cout << "A" << endl;
  }
  else if (nilai >= 70 && nilai < 85) {
    cout << "B" << endl;
  }
  else if (nilai >= 40 && nilai < 70) {
    cout << "C" << endl;
  }
  else if (nilai >= 20 && nilai < 40) {
    cout << "D" << endl;;
  }
  else {
    cout << "E" << endl;
  }
 
  return main();
}
