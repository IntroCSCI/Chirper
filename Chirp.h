#ifndef _CHIRP_H_
#define _CHIRP_H_
#include <string>

class Chirp
{
  private:
  std::string text;

  public:
  bool createChirp(std::string);
  std::string getChirp();
};
#endif
