//converts a binary number stored in string to a decimal number using strol()

#include <cstdlib>

int bin2dec(string bin){
  int dec=strtol(bin,NULL,2);
  return dec;
}
