#include <iostream>
using namespace std;

void getTwoValues(int&,int&);
int getNextPrime(int);
int getPrevPrime(int);

void getTwoValues(int& begin,int& end){

int d=2;
for (int i=0; i<d; i++){
cout<< "Enter two integer values: ";
cin>>begin>>end;
if (begin > end)
  d++;
else 
  break;
}
}

int getNextPrime(int x){
  int d,i,number;
  int j= x+1;
  for (d = x; d <= j; d++) { 
    number = d;
     for (i = 2; i < number; i++) {
       if (number % i == 0) {
         break;
       }
     }
     if (i == number )
       x=number;
      else
       j++;
    }
return x;
}


int getPrevPrime(int z){
  int d,i,number,t;
  for (d = 0; d < z; d++) { 
    number = d;
     for (i = 2; i < number; i++) {
       if (number % i == 0) {
         break;
       }
     }
     if (i == number)
       t=number;
    }
  z=t;
return z;
}
