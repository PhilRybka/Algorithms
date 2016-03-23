//Prints ASCII values of all the elements of a given string

void ascii_values(string s){
    for(int i=0;i<s.size();i++)
        cout<<(int)s[i]<<" "; //static_cast<int>(s[i]) is safer
}
