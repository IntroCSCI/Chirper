#include "Chirp.h"

bool Chirp::createChirp(std::string words)
{
  if( words.length() > 140 )
  {
    return false;
  }
  else
  {
    text = words;
    return true;
  }
}

std::string Chirp::getChirp()
{
  return text;
}
