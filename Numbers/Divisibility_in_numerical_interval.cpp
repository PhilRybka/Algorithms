//Prints numbers from a <a,b> numerical interval which are divisible by c

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=a;i<=b;i++){
        if(i%c==0) cout<<i<<endl;
        }
}
