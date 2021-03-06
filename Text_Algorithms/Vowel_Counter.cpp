#include <iostream>
using namespace std;

bool isVowel(char a){
    //Other languages, eg. Polish have additional 'y' as vowel, keep in mind to check if your language has a different set of vowels
    switch(a){
        case 'a': return true;
        case 'e':return true;
        case 'i':return true;
        case 'o':return true;
        case 'u':return true;
        default: return false;
        }
}
int main(){
    string word;
    cin>>word;
    int vowelCount=0;

    for(int i=0;i<word.size();i++){
        if(isVowel(word[i])) ++vowelCount;
    }

    cout<<"The number of vowels in your word equals: "<<vowelCount;
    return 0;
}
