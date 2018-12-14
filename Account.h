#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <vector>
#include "Chirp.h"
#include "Bitmap/bitmap.h"

class Account
{
  private:
    std::string m_id;
    std::vector <Chirp> m_chirps;
  public:
    Account(); // constructor
    bool addChirp(std::string);
    bool addPictureChirp(std::string, Bitmap);
    void showChirps();
    void setAccountID(std::string);
};

#endif
