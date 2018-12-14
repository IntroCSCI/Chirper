#include <iostream>
#include "Chirp.h"
#include "PictureChirp.h"
#include "Bitmap/bitmap.h"

PictureChirp::PictureChirp()
{
//  std::cout<<"Picture Chirp's constructor called\n";
}

bool PictureChirp::createPictureChirp(std::string myChirp, Bitmap pic)
{
  bool madeText = createChirp(myChirp);
  m_picture = pic;

  bool isValidImage = pic.isImage();
  return madeText && isValidImage;
}
