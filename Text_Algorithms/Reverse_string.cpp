//Reverses a given string. Similar functionality as reverse() from <algorithm>.

string reverseString(string s){
    string rev="";
    for(int i = s.length()-1; i >= 0; i--)
        rev+=s[i];
    return rev;
}
