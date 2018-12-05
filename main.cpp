#include <iostream>
#include <string>
#include "Chirp.h"

using namespace std;

int main()
{
 string message;
 string handle;
 Account person; 

 cout<<"Chirper Login: ";
 cin>>handle;

 do
 {
   cout<<"Enter message (or Q to quit): ";
   cin>>message;

   if( person.addChirp(message) )
   {
     cout<<"Chirp created!\n";
   }
   else
   {
     cout<<"Chirp is limited to 140 characters.\n";
   }
 }while(message != 'q' && message != 'Q');

 person.showChirps();

 return 0;
}
