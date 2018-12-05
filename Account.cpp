#include "Chirp.h"
#include "Account.h"
#include <vector>
#include <string>
#include <iostream>

bool Account::addChirp(std::string chirpText)
{
  Chirp newChirp;
  bool created = newChirp.createChirp(chirpText);

  if( created == true )
  {
    m_chirps.push_back(newChirp);
  }
  return created;
}

void Account::showChirps()
{
  std::cout<<m_id<<"'s chirps:\n";
  for(int i=0; i<m_chirps.size(); i++)
  {
    std::cout<<m_chirps[i].getChirp()<<std::endl;
    std::cout<<"------------------------\n";
  }
}

void Account::setAccountID(std::string id)
{
  m_id = id;
}

