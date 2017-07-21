#include <iostream>
#include "../install/myNet.h"

int main(int argc, char* argv[])
{
  if (argc != 2)
  {
    std::cout << "Usage: <binary_name> <url>" << std::endl;
  }
  std::cout << myNet::getHostByName(argv[1]) << std::endl;
  return 0;
}