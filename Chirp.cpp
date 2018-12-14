#include <iostream>
#include "Chirp.h"

Chirp::Chirp()
{
  text = "";
//  std::cout<<"Chirp's constructor called.\n";
}

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
