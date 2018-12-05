#include "Chirp.h"
#include "Account.h"
#include <vector>
#include <string>
#include <iostream>

//Class constructor makes the id empty by default
Account::Account()
{
  m_id = "";
}

//Adds a new chirp to the account's list of chirps, if it is under 140
//characters; otherwise, it does not add to the list. Returns whether or not
//the chirp was accepted as being under 140 characters
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

//Displays all of the chirps associated with the account, going in
//chronological order from when they were created
void Account::showChirps()
{
  std::cout<<m_id<<"'s chirps:\n";
  for(int i=0; i<m_chirps.size(); i++)
  {
    std::cout<<m_chirps[i].getChirp()<<std::endl;
    std::cout<<"------------------------\n";
  }
}

//Setter for account's id
void Account::setAccountID(std::string id)
{
  m_id = id;
}

