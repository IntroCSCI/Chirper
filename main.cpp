#include <iostream>
#include <string>
#include "Chirp.h"

using namespace std;

int main()
{
 string message;
 Chirp newChirp;

 cout<<"Enter message: ";
 cin>>message;

 if( newChirp.createChirp(message) )
 {
   cout<<"Chirp created!\n";
 }
 else
 {
   cout<<"Chirp is limited to 140 characters.\n";
 }


 return 0;
}
