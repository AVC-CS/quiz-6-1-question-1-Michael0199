#include <iostream>
using namespace std;

int getTwoValues(int &,int &);
int getNextPrime(int);
int getPrevPrime(int);

int getTwoValues(int &a,int &b){
cout<< "Enter two integer values: ";
int d=2;
for (int i=0; i<d; i++){
cin>>a>>b;
if (a > b)
  d++;
else 
  break;
}
  // return a,b;
}

int getNextPrime(int x){
  int d,i,t;
  int number;
  for (d=x; d <= t; d++) { 
  number = d;
   for (i = 2; i < number; i++) {
     if (number % i == 0) {
       break;
     }
   }
    t++;
   if (i == number )
     return number;
     // break;
   // int& prime1 = number;
  }
  return -1;
  }


int getPrevPrime(int z){
 
    int d,i,x;
  int number;
  for (d = 0; d < z; d++) { 
    number = d;
     for (i = 2; i < number; i++) {
       if (number % i == 0) {
         break;
       }
     }
     if (i == number )
       int& prime2 = number;
    }
  return z;
  }
