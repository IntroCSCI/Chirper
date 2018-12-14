#ifndef _PICTURE_CHIRP_H_
#define _CHIRP_H_
#include "Chirp.h"
#include <string>
#include "Bitmap/bitmap.h"

class PictureChirp : public Chirp
{
  private:
    Bitmap m_picture;
  public:
    PictureChirp();
    bool createPictureChirp(std::string, Bitmap);
};

#endif

