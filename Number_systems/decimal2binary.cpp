//Converts a decimal number to a string binary number

#include <cstdlib>

string dec2bin(int dec){
	char bin[255];
	itoa(dec,bin,2);	//notice that this function is not defined in ANSI-C and is not part of C++, but is supported by many compilers
	return (string)bin;
}
