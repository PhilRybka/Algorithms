//This programs returns the number of unique values in an array of the size n (input by user).

#include <iostream>
using namespace std;

 int main(){
    int n;
    cin>>n;
    int *tab=new int[n];

    for(int i=0;i<n;i++){
        cin>>tab[i];
    }

    int uniqueValues=0;

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            if(j==i) continue;
            if(tab[i]==tab[j]) break;

            if(j=n-1) uniqueValues++;
        }
    }
    if(uniqueValues==0) uniqueValues++;
    cout<<uniqueValues;
    delete[] tab;

}
