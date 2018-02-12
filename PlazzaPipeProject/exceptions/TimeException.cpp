//
// TimeException.cpp for plazza in /home/bonnet_v/programs/projects/cpp/plazza
// 
// Made by Bonnet Vivien
// Login   <bonnet_v@epitech.net>
// 
// Started on  Thu Apr 10 13:42:12 2014 Bonnet Vivien
// Last Update Sun Apr 27 13:41:21 2014 Bonnet Vivien
//

#include "TimeException.hh"

TimeException::TimeException(const std::string& message) :
  PlazzaException(message)
{
}

TimeException::~TimeException() throw()
{
}
