#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string mystr="1204";
    int myint;
    stringstream(mystr) >> myint;
    cout<<myint;
}
