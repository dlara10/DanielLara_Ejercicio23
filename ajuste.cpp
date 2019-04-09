#include <fstream>
#include <iostream>
using namespace std;

void leer(string filename);

int main () {
  string f1;
  string f2;
  f1 = "valores_x.txt";
  f2 = "valores_y.txt";
  leer(f1);

    return 0;

}

void leer(string filename, double* x) {
  ifstream infile; 
  string line;
  int b = 1; int c = 0;
  double* a = NULL;
    

  infile.open(filename); 
  getline(infile, line);
  while(infile){
     getline(infile, line);
     b = b+1;  
     c = c + line;
   }
   cout << c << endl;
    infile.close();

}