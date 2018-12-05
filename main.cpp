#include <iostream>
#include <string>
#include "Chirp.h"
#include "Account.h"

using namespace std;

int main()
{
        string message;
        string handle;
        Account person; 

        cout<<"Chirper Login: ";
        cin>>handle;
        cin.ignore(); //discards newline so we can use getline() later
        person.setAccountID(handle);
        do
        {
                cout<<"Enter message (or Q to quit): ";
                getline(cin,message);

                if( message != "q" && message != "Q" )
                {
                        if( person.addChirp(message) )
                        {
                                cout<<"Chirp created!\n";
                        }
                        else
                        {
                                cout<<"Chirp is limited to 140 characters.\n";
                        }
                }
        }while(message != "q" && message != "Q");

        person.showChirps();

        return 0;
}
