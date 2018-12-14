#include <iostream>
#include <string>
#include "Chirp.h"
#include "Account.h"
#include "Bitmap/bitmap.h"

using namespace std;

int main()
{
        string message, response, handle, file;
        Account person;
        Bitmap image;

        cout<<"Chirper Login: ";
        cin>>handle;
        cin.ignore(); //discards newline so we can use getline() later
        person.setAccountID(handle);
        do
        {
                bool success = false;

                cout<<"Enter message (or Q to quit): ";
                getline(cin,message);

                if( message != "q" && message != "Q" )
                {
                        cout<<"Attach picture to chirp (yes/no)? ";
                        cin>>response; 
                        cin.ignore();

                        if( response == "yes" )
                        {
                                cout<<"Enter filename: ";
                                cin>>file;
                                cin.ignore();
                                image.open(file);

                                success = person.addPictureChirp(message,image);
                        }
                        else
                        {
                                success = person.addChirp(message);
                        }

                        if( success )
                        {
                                cout<<"Chirp created!\n";
                        }
                }
        }while(message != "q" && message != "Q");

        person.showChirps();

        return 0;
}
