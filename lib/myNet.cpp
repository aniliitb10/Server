//
// Created by anil on 16/7/17.
//
#include "../install/myNet.h"
#include <netdb.h>
#include <arpa/inet.h>

std::string myNet::getHostByName(const char* url_)
{
  const struct hostent* hostInfo = gethostbyname(url_);
  if (!hostInfo)
  {
    return "ERROR: Couldn't get the host for " + std::string(url_);
  }

  const struct in_addr hostAddr = *(reinterpret_cast<const struct in_addr*>(hostInfo->h_addr_list[0]));
  return std::string(inet_ntoa(hostAddr));
}